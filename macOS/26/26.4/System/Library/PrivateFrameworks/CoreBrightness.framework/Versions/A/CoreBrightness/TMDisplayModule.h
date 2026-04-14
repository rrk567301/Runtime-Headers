@class BrightnessSequenceQueue, NSObject;
@protocol OS_os_log, OS_dispatch_queue, CBBrightnessProxy;

@interface TMDisplayModule : CBDisplayModule {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_updateQueue;
    id<CBBrightnessProxy> _brightnessControlProxy;
    double _rampStart;
    BrightnessSequenceQueue *_updateSequence;
}

- (BOOL)setHighAmbientAdaptation:(float)a0;
- (BOOL)setPotentialHeadroom:(float)a0;
- (BOOL)setFilteredAmbient:(float)a0;
- (BOOL)setAmbient:(float)a0;
- (BOOL)setContrastPreservation:(float)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setSDRBrightness:(float)a0;
- (BOOL)setIndicatorBrightnessLimit:(float)a0;
- (BOOL)setLowAmbientAdaptation:(float)a0;
- (BOOL)setBrightnessLimit:(float)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)setIndicatorBrightness:(float)a0;
- (BOOL)setHeadroom:(float)a0;
- (void)dealloc;
- (BOOL)setContrastEnhancer:(float)a0;
- (BOOL)setReferenceHeadroom:(float)a0;
- (BOOL)setWhitePoint:(id)a0;
- (void)setupNextUpdate;
- (BOOL)brightnessControlProxySendSelector:(id)a0 value:(float)a1;
- (BOOL)commitBrightness;
- (void)configureSkyLightTimeouts;
- (void)finishRamp;
- (BOOL)handleBrightnessControlProperty:(id)a0 forKey:(id)a1;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (BOOL)rampRoutine:(id)a0;
- (BOOL)setAdaptationScale:(float)a0;
- (void)startRamp:(id)a0;
- (BOOL)updateDisplayBrightness:(float)a0 applyPolicy:(BOOL)a1;

@end
