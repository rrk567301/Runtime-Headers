@class NSDate;

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator {
    char _didGenerateEnvironmentalAudioExposureSamples;
    char _didGenerateHeadphoneAudioExposureSamples;
    double _nextEnvironmentalAudioExposureSampleTime;
    NSDate *_lastEnvironmentalSampleEndDate;
    double _nextHeadphoneAudioExposureSampleTime;
    NSDate *_lastHeadphoneSampleEndDate;
}

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;

@end
