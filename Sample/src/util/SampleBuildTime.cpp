#include "SampleBuildTime.h"

SampleBuildTime::SampleBuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

SampleBuildTime::~SampleBuildTime()
{
}

const char* SampleBuildTime::GetDateTime()
{
    return dateTime;
}

