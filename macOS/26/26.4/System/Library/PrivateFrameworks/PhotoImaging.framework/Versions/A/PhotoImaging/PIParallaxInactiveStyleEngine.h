@class NUStyleEngine;
@protocol NUImageBuffer, MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface PIParallaxInactiveStyleEngine : NSObject {
    NUStyleEngine *_styleEngine;
    struct CGSize { double width; double height; } _expectedImageSize;
    struct __CVMetalTextureCache { } *_textureCache;
    id<MTLBuffer> _styleBuffer;
    id<MTLBuffer> _identityBuffer;
    id<MTLBuffer> _mixedBuffer;
    id<MTLTexture> _styleTexture;
    id<MTLTexture> _identityTexture;
    id<MTLTexture> _mixedTexture;
    id<MTLTexture> _thumbnailTexture;
    id<NUImageBuffer> _thumbnailBuffer;
    BOOL _isApplyingStyle;
    float _styleIntensity;
    struct CGSize { double width; double height; } _actualImageSize;
}

@property (class, readonly, nonatomic) BOOL supportsAlpha;

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;

+ (void)learnStyleFromPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPixelBuffer:(struct __CVBuffer { } *)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;
+ (void)learnStyleFromPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)_beginPartialApplyStyleWithIntensity:(float)a0;
- (void)applyStyleToPixelBuffer:(struct __CVBuffer { } *)a0 intensity:(float)a1 completion:(id /* block */)a2;
- (void)applyStyleToPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intensity:(float)a2 completion:(id /* block */)a3;
- (void)applyStyleToTexture:(id)a0 intensity:(float)a1 completion:(id /* block */)a2;
- (void)applyStyleToTexture:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intensity:(float)a2 completion:(id /* block */)a3;
- (BOOL)beginPartialApplyStyleWithPixelBuffer:(struct __CVBuffer { } *)a0 intensity:(float)a1 error:(out id *)a2;
- (BOOL)beginPartialApplyStyleWithPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intensity:(float)a2 error:(out id *)a3;
- (BOOL)beginPartialApplyStyleWithTexture:(id)a0 intensity:(float)a1 error:(out id *)a2;
- (BOOL)beginPartialApplyStyleWithTexture:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intensity:(float)a2 error:(out id *)a3;
- (id)cachedTextureForPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (void)endPartialApplyStyleWithCompletion:(id /* block */)a0;
- (void)generateStyleDataFromStyleBuffer:(id)a0 completion:(id /* block */)a1;
- (id)initWithMetalDevice:(id)a0 commandQueue:(id)a1;
- (void)learnStyleFromPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPixelBuffer:(struct __CVBuffer { } *)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;
- (void)learnStyleFromPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 completion:(id /* block */)a2;
- (void)learnStyleFromTexture:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toTexture:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;
- (void)learnStyleFromTexture:(id)a0 toTexture:(id)a1 completion:(id /* block */)a2;
- (BOOL)partialApplyStyleToPixelBuffer:(struct __CVBuffer { } *)a0 at:(struct CGPoint { double x0; double x1; })a1 error:(out id *)a2;
- (BOOL)partialApplyStyleToPixelBuffer:(struct __CVBuffer { } *)a0 at:(struct CGPoint { double x0; double x1; })a1 subrect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(out id *)a3;
- (BOOL)partialApplyStyleToTexture:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 error:(out id *)a2;
- (BOOL)partialApplyStyleToTexture:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 subrect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(out id *)a3;
- (BOOL)prepareForApplyingStyle:(id)a0 error:(out id *)a1;
- (BOOL)prepareForLearningWithImageSize:(struct CGSize { double x0; double x1; })a0 error:(out id *)a1;

@end
