#include "learning_gem5/hello_object.hh"
#include "debug/HelloExample.hh"
#include "base/trace.hh"

namespace gem5 
{
HelloObject::HelloObject(const HelloObjectParams &params) :
    gem5::SimObject(params)
{
    DPRINTF(HelloExample, "Created the hello object\n");
}
}
