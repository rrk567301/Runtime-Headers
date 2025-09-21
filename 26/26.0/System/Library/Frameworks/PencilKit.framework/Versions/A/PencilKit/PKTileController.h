@class NSObject, PKMetalRendererController, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKTileController : NSObject

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) BOOL previewsSuspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (nonatomic) BOOL invertColors;
@property (nonatomic) BOOL sixChannelBlending;
@property (nonatomic) BOOL transparentBlending;
@property (nonatomic) double contentZoomScale;
@property (nonatomic) BOOL wantsExtendedDynamicRangeContent;

- (void)teardown;
- (void).cxx_destruct;
- (void)suspendPreviews;
- (long long)blendingModeForSixChannelBlending:(BOOL)a0 withTransparentBlending:(BOOL)a1;
- (void)callbackAfterTileGeneration:(id /* block */)a0;
- (void)didComplete;
- (void)flushMemoryIfPossible;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0 actualSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2 sixChannelBlending:(BOOL)a3 transparentBlending:(BOOL)a4 wantsExtendedDynamicRangeContent:(BOOL)a5 metalConfig:(id)a6;
- (void)renderStrokes:(id)a0 additionalStrokes:(id)a1 intoTile:(id)a2 completionBlock:(id /* block */)a3;
- (void)renderTilesIntoTiles:(id)a0 completion:(id /* block */)a1;
- (void)resumePreviews;
- (void)runTasks;
- (id)strokes:(id)a0 updateWithAdditionalStrokes:(id)a1;
- (void)updateTiles:(id)a0 withNewStrokes:(id)a1 completionBlock:(id /* block */)a2;

@end
