@class PKMetalRendererController, NSObject;
@protocol OS_dispatch_queue;

@interface PKTileController : NSObject

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (nonatomic) BOOL previewsSuspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (nonatomic) BOOL invertColors;
@property (nonatomic) BOOL sixChannelBlending;

- (void).cxx_destruct;
- (void)teardown;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0 actualSize:(struct CGSize { double x0; double x1; })a1 renderQueue:(id)a2 usePrivateResourceHandler:(BOOL)a3 pixelFormat:(unsigned long long)a4 sixChannelBlending:(BOOL)a5;
- (void)flushMemoryIfPossible;
- (void)resumePreviews;
- (id)strokes:(id)a0 updateWithAdditionalStrokes:(id)a1;
- (void)updateTiles:(id)a0 withNewStrokes:(id)a1 completionBlock:(id /* block */)a2;
- (void)suspendPreviews;
- (void)renderTilesIntoTiles:(id)a0 completion:(id /* block */)a1;
- (void)callbackAfterTileGeneration:(id /* block */)a0;
- (void)renderStrokes:(id)a0 additionalStrokes:(id)a1 intoTile:(id)a2 completionBlock:(id /* block */)a3;

@end
