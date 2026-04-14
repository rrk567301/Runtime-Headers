@class NSObject;
@protocol MTL4FXEffectTracingDelegate, OS_dispatch_semaphore;

@interface _MTL4FXEffect : _MTLFXEffectBase {
    NSObject<OS_dispatch_semaphore> *_maxFramesInFlightSemaphore;
}

@property (weak) id<MTL4FXEffectTracingDelegate> tracingDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)_beginEncodeWithCommandBuffer:(id)a0;
- (void)_didCreateComputeCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;
- (void)_didCreateRenderCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;

@end
