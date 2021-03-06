#include <data_stream.h>


/**
 * Data Stream that send Data
 */
const char* data_stream::send(const char* message)
{
   if(payload != NULL && !(this->lock))
    this->process();

    if(this->threshold != 0)
    {
        if(ARRAY_SIZE(message) > this->threshold) return "Message size is above allowed !";
        else return message;
    }
    else return message;
}


