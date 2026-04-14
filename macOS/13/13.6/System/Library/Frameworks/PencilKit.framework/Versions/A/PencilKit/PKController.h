@class PKMetalRendererController, NSArray, PKDrawing, PKStrokeGenerator, PKMetalConfig, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PKControllerDelegate, OS_dispatch_semaphore;

@interface PKController : NSObject {
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
    PKMetalConfig *_metalConfig;
}

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property BOOL liveInteraction;
@property (weak, nonatomic) NSObject<PKControllerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *renderedStrokes;
@property (readonly, nonatomic) PKStrokeGenerator *inputController;
@property (nonatomic) BOOL invertColors;
@property (nonatomic) BOOL sixChannelBlending;

- (id)init;
- (void).cxx_destruct;
- (void)teardown;
- (void)updateDrawingWithErasedStrokes:(id)a0;
- (void)_drawingChanged;
- (void)_addNewStrokes:(id)a0 liveDrawing:(id)a1 liveDrawingUndoCommand:(id)a2 hidden:(BOOL)a3 preDrawingChangedBlock:(id /* block */)a4;
- (void)_didRenderStrokes:(id)a0;
- (void)_didUpdateMutableRenderedStrokes;
- (BOOL)_loadInitialDrawing:(id)a0 withImageTexture:(id)a1;
- (void)_renderAllInStrokeSpaceRectCompletion:(id /* block */)a0;
- (void)_renderAllStrokes:(id)a0 completion:(id /* block */)a1;
- (void)_renderImageTexture:(id)a0;
- (void)_renderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)_renderStrokes:(id)a0 completion:(id /* block */)a1;
- (void)_setDrawing:(id)a0 initialDrawing:(id)a1 imageTexture:(id)a2 andMask:(struct CGImage { } *)a3 setupComplete:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_updateDrawing:(id)a0 erasedStrokes:(id)a1 completion:(id /* block */)a2;
- (void)addNewRenderedStrokes:(id)a0 hidden:(BOOL)a1 preDrawingChangedBlock:(id /* block */)a2;
- (void)addNewRenderedStrokes:(id)a0 liveDrawing:(id)a1 liveDrawingUndoCommand:(id)a2 hidden:(BOOL)a3 preDrawingChangedBlock:(id /* block */)a4;
- (void)cancelLongRunningRenders;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteraction;
- (void)hideStrokesWithoutUpdating:(id)a0 completion:(id /* block */)a1;
- (void)imageWithCompletionBlock:(id /* block */)a0;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0 actualSize:(struct CGSize { double x0; double x1; })a1 singleComponent:(BOOL)a2 sixChannelBlending:(BOOL)a3 metalConfig:(id)a4;
- (void)performAsyncInteractBlock:(id /* block */)a0;
- (void)removeStrokesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 from:(id)a1;
- (void)renderStrokes:(id)a0 completion:(id /* block */)a1;
- (void)setDrawing:(id)a0 initialDrawing:(id)a1 imageTexture:(id)a2 andMask:(struct CGImage { } *)a3 setupComplete:(id /* block */)a4 completion:(id /* block */)a5;
- (void)setDrawing:(id)a0 tiles:(id)a1 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 contentImageTexture:(id)a3 contentImageTextureTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 setupComplete:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)setLiveInteractionDrawing:(id)a0;

@end
