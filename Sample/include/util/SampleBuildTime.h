#ifndef D_SampleBuildTime_H
#define D_SampleBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  SampleBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class SampleBuildTime
  {
  public:
    explicit SampleBuildTime();
    virtual ~SampleBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    SampleBuildTime(const SampleBuildTime&);
    SampleBuildTime& operator=(const SampleBuildTime&);

  };

#endif  // D_SampleBuildTime_H
