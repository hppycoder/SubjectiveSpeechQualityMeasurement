
//           Copyright Nathaniel Christen 2018.
//  Distributed under the Boost Software License, Version 1.0.
//     (See accompanying file LICENSE_1_0.txt or copy at
//           http://www.boost.org/LICENSE_1_0.txt)

#ifndef PHAON_RUNNER__H
#define PHAON_RUNNER__H


#include "kans.h"

#include "phaon-function.h"

#include <QString>
#include <QQueue>

namespace KA { namespace KCM { class KCM_Channel_Group; } }
namespace KA { namespace KCM { class Kauvir_Code_Model; } }
using namespace KA::KCM;

namespace KA { namespace CMD { class KCM_Scope_System; } }
using namespace KA::CMD;

namespace KA { namespace PhaonLib {

class Phaon_Symbol_Scope;
class Phaon_Function_Vector;
class Phaon_Channel_Group_Table;


class Phaon_Runner
{
 Kauvir_Code_Model* kcm_;
 KCM_Scope_System* scopes_;
 Phaon_Channel_Group_Table* table_;

public:

 Phaon_Runner();

 Kauvir_Code_Model& get_kcm()
 {
  return *kcm_;
 }

 Phaon_Channel_Group_Table& get_table()
 {
  return *table_;
 }

 void init_scope_system();
 QQueue<Phaon_Symbol_Scope*>& get_phaon_scope_queue();

 void run(KCM_Channel_Group& kcg);

};


} }


#endif //PHAON_RUNNER__H
