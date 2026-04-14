@class NSString, VFXMTLRenderContext;
@protocol MTLRenderCommandEncoder, MTLCommandBuffer, MTLTexture;

@interface VFXMTLRenderContextSceneRendererMainPassCustomPostProcessHelper : NSObject <_VFXWorldRendererMainPassCustomPostProcessHelper> {
    struct __CFXEngineContext { } *_engineContext;
    VFXMTLRenderContext *_renderContext;
    void *_currentPass;
}

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> renderCommandEncoder;
@property (readonly, nonatomic) id<MTLTexture> destinationTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawSceneBackgroundUsingEncoder:(id)a0 commandBuffer:(id)a1 renderPassDescriptor:(id)a2;
- (id)mainPassColorTextureAtIndex:(unsigned long long)a0;
- (void)setCurrentPass:(void *)a0;

@end
