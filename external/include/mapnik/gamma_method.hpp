/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2012 Artem Pavlenko
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#ifndef MAPNIK_GAMMA_METHOD_HPP
#define MAPNIK_GAMMA_METHOD_HPP

#include <mapnik/enumeration.hpp>

namespace mapnik {

enum gamma_method_enum {
    GAMMA_POWER, //agg::gamma_power
    GAMMA_LINEAR, //agg::gamma_linear
    GAMMA_NONE, //agg::gamma_none
    GAMMA_THRESHOLD, //agg::gamma_threshold
    GAMMA_MULTIPLY, //agg::gamma_multiply
    gamma_method_enum_MAX
};

DEFINE_ENUM (gamma_method_e, gamma_method_enum );

}

#endif // MAPNIK_GAMMA_METHOD_HPP
