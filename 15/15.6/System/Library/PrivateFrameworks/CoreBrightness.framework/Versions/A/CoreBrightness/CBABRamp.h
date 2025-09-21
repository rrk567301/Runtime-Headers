@class NSObject, CBDisplayModule;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CBABRamp : NSObject {
    CBDisplayModule *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fadeTimer;
    NSObject<OS_os_log> *_logHandle;
    float _maxLinearBrightness;
    float _minLinearBrightness;
}

- (void)dealloc;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (float)getVersion;
- (void)setPerceptualBrightnessWithFade:(float)a0 length:(float)a1 current:(float)a2;
- (void)stopTransition;
- (void)transitionToBrightness:(float)a0 force:(char)a1 periodOverride:(char)a2 period:(float)a3;

@end
