/* HackTM - C++ implementation of Numenta Cortical Learning Algorithm.
 * Copyright (c) 2010-2011 Gianluca Guida <glguida@gmail.com>
 *  
 * This software is released under the Numenta License for
 * Non-Commercial Use. You should have received a copy of the Numenta
 * License for Non-Commercial Use with this software (usually
 * contained in a file called LICENSE.TXT). If you don't, you can
 * download it from 
 * http://numenta.com/about-numenta/Numenta_Non-Commercial_License.txt.
 */

#ifndef __HACKTM_H__
#define __HACKTM_H__

#include <vector>
#include <list>

namespace hacktm {

  typedef int coord_t;
  typedef unsigned id_t;
  typedef unsigned scalar_t;
  typedef std::vector<coord_t> Vector;

  struct synapse {
    id_t id;
    float perm;
  };
  typedef std::list<struct synapse *>::iterator synapse_iterator;


  class Introspection;
}


/*
 * Debug and printout controls.
 */

namespace hacktmdebug {

  enum debug {
    None = 0,
    PrintOverlappingColumns = 1,
    PrintWinningColumns = 2,
    PrintInhibitionRadius = 4,
    All = 0xff
  };

  extern int Flags;
}

#include "HackTMConfig.h"

#endif
