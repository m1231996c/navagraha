#ifndef _NAVAGRAHA_KUBEENT_DEPLOYMENT_CONDITION_H
#define _NAVAGRAHA_KUBEENT_DEPLOYMENT_CONDITION_H

#include "extensions/field.hpp"
#include "kubeent/time.hpp"
#include <string>

namespace navagraha {
namespace kubeent {

extern char DEPLOYMENT_CONDITION_LAST_TRANSITION_TIME[];
extern char DEPLOYMENT_CONDITION_LAST_UPDATE_TIME[];
extern char DEPLOYMENT_CONDITION_MESSAGE[];
extern char DEPLOYMENT_CONDITION_STATUS[];
extern char DEPLOYMENT_CONDITION_TYPE[];

class deployment_condition {
public:
    extensions::field<time, DEPLOYMENT_CONDITION_LAST_TRANSITION_TIME> last_transition_time;
    extensions::field<time, DEPLOYMENT_CONDITION_LAST_UPDATE_TIME> last_update_time;
    extensions::field<std::string, DEPLOYMENT_CONDITION_MESSAGE> message;
    extensions::field<std::string, DEPLOYMENT_CONDITION_STATUS> status;
    extensions::field<std::string, DEPLOYMENT_CONDITION_TYPE> type;

    static void serialize(deployment_condition & obj, std::ostringstream & str);
};

}
}

#endif
