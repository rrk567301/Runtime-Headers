@class AKPageController, AKAnnotation, CALayer;

@interface AKAnnotationLayer : CALayer

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property (retain, nonatomic) CALayer *fastPathLayer;
@property char isObservingAnnotation;
@property char wasLastDrawingClipped;
@property char lastRedrawWasForDrawingBounds;
@property char shouldRecalculateLoupeImage;

+ (id)newAnnotationLayerForAnnotation:(id)a0 withPageController:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)updateContents;
- (void)_addDebugVisuals;
- (id)_initWithAnnotation:(id)a0 andPageController:(id)a1;
- (void)_removeDebugVisuals;
- (void)_updateAnnotationLayerWithLoupeFastPath:(char)a0;
- (void)updatePixelAlignment;

@end
