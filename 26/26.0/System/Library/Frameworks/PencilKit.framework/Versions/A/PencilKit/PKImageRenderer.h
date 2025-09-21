@class PKMetalRendererController;

@interface PKImageRenderer : NSObject

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (nonatomic) long long cancelCount;
@property (nonatomic) BOOL synchronous;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL extendedDynamicRange;
@property (nonatomic) BOOL invertColors;
@property (readonly, nonatomic) BOOL sixChannelBlending;

+ (void)_fuzzTestUnzippedData:(id)a0;
+ (struct CGImage { } *)createImageByUnpremultiplyingAlphaInImage:(struct CGImage { } *)a0;
+ (struct CGImage { } *)createJPEGCopyFrom:(struct CGImage { } *)a0 compressionQuality:(double)a1;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2;
- (void)_renderCGStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completion:(id /* block */)a4;
- (long long)blendingModeForSixChannelBlending:(BOOL)a0 withTransparentBlending:(BOOL)a1;
- (void)buildStrokeRenderCacheForDrawing:(id)a0;
- (id)initSyncWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initSyncWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 extendedDynamicRange:(BOOL)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3 extendedDynamicRange:(BOOL)a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3 transparentBlending:(BOOL)a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3 transparentBlending:(BOOL)a4 extendedDynamicRange:(BOOL)a5;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMetal:(BOOL)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMetal:(BOOL)a2 renderQueue:(id)a3;
- (void)renderCGStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderCGStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completion:(id /* block */)a4;
- (void)renderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completion:(id /* block */)a4;
- (void)renderDrawing:(id)a0 completion:(id /* block */)a1;
- (void)renderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completion:(id /* block */)a4;
- (void)setupWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3 synchronous:(BOOL)a4 transparentBlending:(BOOL)a5 extendedDynamicRange:(BOOL)a6;
- (void)sixChannelCGRenderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)sixChannelCGRenderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completion:(id /* block */)a4;
- (void)sixChannelCGRenderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)sixChannelPDFRenderDrawing:(id)a0 context:(struct CGContext { } *)a1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3 completion:(id /* block */)a4;

@end
