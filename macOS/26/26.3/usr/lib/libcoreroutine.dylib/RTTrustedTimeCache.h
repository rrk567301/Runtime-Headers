@interface RTTrustedTimeCache : NSObject

@property (nonatomic) double cachedTrustedTimeCfatSeconds;
@property (nonatomic) double cachedTrustedTimeMachContSeconds;
@property (nonatomic) double cachedReferenceTimeCfatSeconds;
@property (nonatomic) double cachedReferenceTimeMachContSeconds;
@property (nonatomic) double minBoundReferenceTimeCfatSeconds;
@property (nonatomic) double maxBoundReferenceTimeCfatSeconds;
@property (nonatomic) double machContSecondsWhenReferenceTimeBoundsSet;

- (id)init;
- (double)machContinuousTimeSeconds;
- (double)convertMachContinuousTicksToSeconds:(unsigned long long)a0;
- (id)getApproximateTrustedDateNow;
- (id)getApproximateTrustedDateNowWithUnsecureFallback;
- (void)setBoundsForReferenceTimeWithMinimumDate:(id)a0 maximumDate:(id)a1;

@end
