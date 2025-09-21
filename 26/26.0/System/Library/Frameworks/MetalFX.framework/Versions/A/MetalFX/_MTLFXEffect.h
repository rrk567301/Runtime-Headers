@protocol MTLFXEffectTracingDelegate;

@interface _MTLFXEffect : _MTLFXEffectBase

@property (weak) id<MTLFXEffectTracingDelegate> tracingDelegate;

- (void).cxx_destruct;
- (void)_didCreateBlitCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;
- (void)_didCreateComputeCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;
- (void)_didCreateRenderCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;

@end
