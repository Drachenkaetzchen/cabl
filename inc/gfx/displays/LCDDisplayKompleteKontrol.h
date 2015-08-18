/*----------------------------------------------------------------------------------------------------------------------   

                 %%%%%%%%%%%%%%%%%                
                 %%%%%%%%%%%%%%%%%
                 %%%           %%%
                 %%%           %%%
                 %%%           %%%
%%%%%%%%%%%%%%%%%%%%           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% www.shaduzlabs.com %%%%%

------------------------------------------------------------------------------------------------------------------------

  Copyright (C) 2014 Vincenzo Pacella

  This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public 
  License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later
  version.

  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied 
  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along with this program.  
  If not, see <http://www.gnu.org/licenses/>.

----------------------------------------------------------------------------------------------------------------------*/
#pragma once

#include <stdint.h>

#include "gfx/LCDDisplay.h"

namespace sl
{
namespace kio
{
class LCDDisplayKompleteKontrol : public LCDDisplay
{
  
public:

  LCDDisplayKompleteKontrol();
  
  ~LCDDisplayKompleteKontrol();
  
  void clear() override;

  void printChar(uint16_t x_, uint16_t y_, char c_) override;

  void setText(const std::string& string_, uint8_t row_) override; 

  void setText(unsigned value_, uint8_t row_) override;

  void setValue(float value_, uint8_t row_) override;
};
  
//----------------------------------------------------------------------------------------------------------------------
  
} // kio
} // sl
