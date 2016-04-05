// Reaktoro is a unified framework for modeling chemically reactive systems.
//
// Copyright (C) 2014-2015 Allan Leal
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Reaktoro includes
#include <Reaktoro/Common/Matrix.hpp>

namespace Reaktoro {

/// A type contains the sensitivity data of the equilibrium state.
struct EquilibriumSensitivity
{
    /// The sensitivity of the molar amounts of species w.r.t. temperature (in units of mol/K).
    Vector T;

    /// The sensitivity of the molar amounts of species w.r.t. pressure (in units of mol/Pa).
    Vector P;

    /// The sensitivity of the molar amounts of species w.r.t. molar amounts of elements (in units of mol/mol).
    Matrix be;
};

} // namespace Reaktoro