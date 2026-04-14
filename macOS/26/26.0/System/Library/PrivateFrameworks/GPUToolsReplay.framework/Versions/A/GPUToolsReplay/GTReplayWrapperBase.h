@protocol MTLFXEffectTracingDelegate;

@interface GTReplayWrapperBase : NSObject {
    id _gpuScaler;
    id _aneScaler;
    unsigned char _executionMode;
}

@property (weak) id<MTLFXEffectTracingDelegate> tracingDelegate;
@property (readonly) unsigned long long effectID;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)executionMode;
- (void)setExecutionMode:(unsigned char)a0;

@end
