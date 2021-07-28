/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 * Original author: Benoit Bolsee
 */

/** \file
 * \ingroup ikplugin
 */

#pragma once

#include "ikplugin_api.h"

#ifdef __cplusplus
extern "C" {
#endif

void itasc_initialize_tree(struct Depsgraph *depsgraph,
                           struct Scene *scene,
                           struct Object *ob,
                           float ctime);
void itasc_execute_tree(struct Depsgraph *depsgraph,
                        struct Scene *scene,
                        struct Object *ob,
                        struct bPoseChannel *pchan_root,
                        float ctime);
void itasc_release_tree(struct Scene *scene, struct Object *ob, float ctime);
void itasc_clear_data(struct bPose *pose);
void itasc_clear_cache(struct bPose *pose);
void itasc_update_param(struct bPose *pose);
void itasc_test_constraint(struct Object *ob, struct bConstraint *cons);

#ifdef __cplusplus
}
#endif