@class NSString, NSObject;
@protocol OS_os_log, PILTransportProtocol;

@interface PILController : NSObject <CBHIDServiceProtocol> {
    float _knownNits;
    unsigned int _knownDutyCycle;
    BOOL _running;
    NSObject<OS_os_log> *_logHandle;
    id<PILTransportProtocol> _transport;
    struct PILDefaults { unsigned int minHWDutyCycle; unsigned int maxHWDutyCycle; unsigned int knownNits; float knownDutyCycle; } _defaults;
}

@property float calibrationScalar;
@property float systemDesiredScalar;
@property (readonly) BOOL isIndicatorEnabled;
@property (readonly) BOOL dutyCycleRangeFetched;
@property (readonly) float maximumAchievableBrightness;
@property (readonly) float minimumAchievableBrightness;
@property (readonly) unsigned int minimumDutyCycle;
@property (readonly) unsigned int maximumDutyCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)setBrightness:(float)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (float)brightnessForDutyCycle:(float)a0;
- (void)fetchDutyCycleRangeIfNeeded;
- (float)getDutyCycle;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleIndicatorStateChange:(BOOL)a0;
- (id)initWithCalibration:(unsigned short)a0 andControlType:(unsigned long long)a1 andTransport:(id)a2 andDefaults:(struct PILDefaults { unsigned int x0; unsigned int x1; unsigned int x2; float x3; })a3;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

@end
