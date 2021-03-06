/* src/mpria_assert.h -- C header file */
/*
 * MPRIA - GNU Multi-Precision Rational Interval Arithmetic Library
 * Copyright (C) 2009-2016  Jerome Benoit <jgmbenoit@rezozer.net>
 *
 * This file is part of the GNU MPRIA Library.
 *
 * The GNU MPRIA Library is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * The GNU MPRIA Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the GNU MPRIA Library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __MPRIA_ASSERT_H__
#define __MPRIA_ASSERT_H__

/* #include "mpria_config.h" */
#define WITH_ASSERT

#ifdef WITH_ASSERT
#include <assert.h>
#define MPRIA_ASSERT(Expression) assert(Expression);
#else
#define MPRIA_ASSERT(Expression)
#endif

#endif /* __MPRIA_ASSERT_H__ */

/* End of file src/mpria_assert.h */
