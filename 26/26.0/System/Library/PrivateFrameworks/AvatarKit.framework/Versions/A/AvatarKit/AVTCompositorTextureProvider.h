@class NSString, AVTCompositorPipeline, NSMutableSet, AVTMemoji, AVTCompositor;
@protocol MTLTexture;

@interface AVTCompositorTextureProvider : NSObject <VFXMaterialPropertyTextureProvider> {
    AVTMemoji *_memoji;
    AVTCompositor *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    BOOL _skinIsDirty;
    unsigned long long _componentDirtyMask;
    NSMutableSet *_helperTokens;
    id<MTLTexture> _lastRenderedTexture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)newTextureForDevice:(id)a0;
- (void)renderToTexture:(id)a0 computeCommandHandler:(id /* block */)a1 blitCommandHandler:(id /* block */)a2 completionHandler:(id /* block */)a3 helper:(id)a4;
- (void)componentDidChangeForTypes:(unsigned long long)a0;
- (id)initWithCompositor:(id)a0 memoji:(id)a1 propertyName:(id)a2;
- (void)skinColorDidChange;

@end
