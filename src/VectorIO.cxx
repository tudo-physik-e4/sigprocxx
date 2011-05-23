// Copyright (C) 2011 Oliver Schulz <oliver.schulz@tu-dortmund.de>

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.


#include "VectorIO.h"

#include <iostream>



using namespace std;


namespace sigpx {

std::ostream& VectorIO::print(std::ostream &os, const std::vector<uint8_t> &v)
	{ return printT(os, v); }

void VectorIO::stuff(std::vector<uint8_t> &stuffed, std::vector<int32_t> &sizes, const std::vector<uint8_t> &v)
	{ stuffT(stuffed, sizes, v); }

void VectorIO::unstuff(const std::vector<uint8_t> &stuffed, const std::vector<int32_t> &sizes, int i, std::vector<uint8_t> &v)
	{ unstuffT(stuffed, sizes, i, v); }


std::ostream& VectorIO::print(std::ostream &os, const std::vector<int16_t> &v)
	{ return printT(os, v); }

void VectorIO::stuff(std::vector<int16_t> &stuffed, std::vector<int32_t> &sizes, const std::vector<int16_t> &v)
	{ stuffT(stuffed, sizes, v); }

void VectorIO::unstuff(const std::vector<int16_t> &stuffed, const std::vector<int32_t> &sizes, int i, std::vector<int16_t> &v)
	{ unstuffT(stuffed, sizes, i, v); }


std::ostream& VectorIO::print(std::ostream &os, const std::vector<int32_t> &v)
	{ return printT(os, v); }

void VectorIO::stuff(std::vector<int32_t> &stuffed, std::vector<int32_t> &sizes, const std::vector<int32_t> &v)
	{ stuffT(stuffed, sizes, v); }

void VectorIO::unstuff(const std::vector<int32_t> &stuffed, const std::vector<int32_t> &sizes, int i, std::vector<int32_t> &v)
	{ unstuffT(stuffed, sizes, i, v); }


} // namespace sigpx