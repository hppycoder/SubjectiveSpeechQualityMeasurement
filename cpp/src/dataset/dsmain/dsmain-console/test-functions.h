
//           Copyright Nathaniel Christen 2018.
//  Distributed under the Boost Software License, Version 1.0.
//     (See accompanying file LICENSE_1_0.txt or copy at
//           http://www.boost.org/LICENSE_1_0.txt)

#ifndef TEST_FUNCTIONS__H
#define TEST_FUNCTIONS__H

#ifdef USING_KPH

#include "accessors.h"

#include "kans.h"

#include <QString>
#include <QStringList>

#include <QMap>

namespace KA { namespace KCM { class Kauvir_Code_Model; } }
using namespace KA::KCM;

namespace KA { namespace PhaonLib { class Phaon_Channel_Group_Table; } }
namespace KA { namespace PhaonLib { class Phaon_Symbol_Scope; } }
using namespace KA::PhaonLib;

namespace KA { namespace Phaon {

void init_test_functions(void* origin, Kauvir_Code_Model& kcm,
  Phaon_Channel_Group_Table& table, Phaon_Symbol_Scope& pss);

} }


#endif // USING_KPH


#endif //TEST_FUNCTIONS__H
