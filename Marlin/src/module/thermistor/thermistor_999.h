/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// User-defined table 2
// Dummy Thermistor table.. It will ALWAYS read a fixed value.

const short temptable_999[][2] PROGMEM = {
  {     0 * OVERSAMPLENR, 240 },
  {     5 * OVERSAMPLENR, 235 },
  {    18 * OVERSAMPLENR, 230 },
  {    64 * OVERSAMPLENR, 220 },
  {   113 * OVERSAMPLENR, 210 },
  {   169 * OVERSAMPLENR, 200 },
  {   245 * OVERSAMPLENR, 190 },
  {   340 * OVERSAMPLENR, 180 },
  {   454 * OVERSAMPLENR, 170 },
  {   597 * OVERSAMPLENR, 160 },
  {   941 * OVERSAMPLENR, 140 },
  {  1470 * OVERSAMPLENR, 120 },
  {  2039 * OVERSAMPLENR, 100 },
  {  2640 * OVERSAMPLENR,  80 },
  {  3240 * OVERSAMPLENR,  60 },
  {  3828 * OVERSAMPLENR,  40 },
  {  4095 * OVERSAMPLENR,  28 }
};
