@class _TtC3VFX13VFXCoreCamera, _TtC3VFX9VFXEffect, _TtC3VFX8VFXScene, NSColor;
@protocol MTLTexture;

@interface VFX.VFXRendererLegacy : NSObject {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ performMetalCaptureDuringSnapshot;
    void /* function */ postRenderCallback;
}

@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic, retain) id<MTLTexture> texture;
@property (nonatomic, retain) id<MTLTexture> depthTexture;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, retain) _TtC3VFX13VFXCoreCamera *pointOfView;
@property (nonatomic) BOOL enableDeferredRendering;
@property (nonatomic) BOOL additiveWritesToAlpha;
@property (nonatomic, copy) id /* block */ postRenderCallback;

- (id)initWithCommandQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCommandBuffer:(id)a0;
- (void)finalizeEncoding;
- (BOOL)hasRenderableObjects;
- (id)snapshotImageWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;

@end
