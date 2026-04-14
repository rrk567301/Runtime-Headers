@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CILController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
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
- (id)initWithQueue:(id)a0 andCurveVersion:(unsigned long long)a1;
- (BOOL)setCalibrationSacalar:(float)a0;

@end
