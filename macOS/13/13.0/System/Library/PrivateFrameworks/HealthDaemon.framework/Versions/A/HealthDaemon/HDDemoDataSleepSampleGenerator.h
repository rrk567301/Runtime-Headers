@class NSArray;

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {
    double _nextSleepDurationSampleTime;
    NSArray *_sleepGraphsArray;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (id)sleepGraphsFileName;
- (double)computeAwakeTimeForDemoPerson:(id)a0 atTime:(double)a1;
- (double)computeSleepTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (BOOL)isDemoPersonAwake:(id)a0 atTime:(double)a1;
- (BOOL)isDemoPersonSleeping:(id)a0 atTime:(double)a1;
- (id)createSleepSamplesFromSleepGraph:(id)a0 sleepCategoryType:(id)a1 startDate:(id)a2 endDate:(id)a3;

@end
