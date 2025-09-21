@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator {
    char _didGenerateMindfulnessMinute;
    double _nextMindfulSessionSampleTime;
}

@property (readonly, nonatomic) char didGenerateMindfulnessMinute;

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
