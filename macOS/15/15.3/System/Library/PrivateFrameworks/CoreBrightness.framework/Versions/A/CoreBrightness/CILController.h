@class NSObject;
@protocol OS_os_log;

@interface CILController : NSObject {
    unsigned int _maximumDutyCycle;
    unsigned int _minimumDutyCycle;
    float _knownNits;
    unsigned int _knownDutyCycle;
    float _mappedBrightness;
    BOOL _running;
    void *_apdsConnection;
    BOOL _dutyCycleRangeFetched;
    NSObject<OS_os_log> *_logHandle;
}

@property float calibrationScalar;
@property float systemDesiredScalar;
@property (readonly) BOOL isIndicatorEnabled;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)setBrightness:(float)a0;
- (void)fetchDutyCycleRangeIfNeeded;
- (float)getBrightness;
- (void)handleIndicatorStateChange:(BOOL)a0;
- (id)initWithCurveVersion:(unsigned long long)a0;
- (BOOL)setCalibrationSacalar:(float)a0;

@end
