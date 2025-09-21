@class AKPageController, AKAnnotation, CALayer;

@interface AKAdornmentLayer : CALayer

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property char isObservingAnnotation;
@property (retain) CALayer *handleContainerLayer;
@property double currentScaleFactor;
@property char isObservingEventHandling;

+ (Class)_adornmentClassForAnnotation:(id)a0;
+ (id)newAdornmentLayerForAnnotation:(id)a0 withPageController:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)teardown;
- (id)actionForKey:(id)a0;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_addHandleSublayerAtPoint:(struct CGPoint { double x0; double x1; })a0 withStyle:(unsigned long long)a1;
- (id)_initWithAnnotation:(id)a0 andPageController:(id)a1;
- (void)_startObservingAnnotationEventHandlers;
- (void)_stopObservingAnnotationEventHandlers;
- (unsigned long long)currentlyDraggedArea;
- (id)handleSublayerWithStyle:(unsigned long long)a0;
- (char)needsUpdateWhenDraggingStartsOrEnds;
- (void)updateAdornmentElements;
- (void)updatePixelAlignment;
- (void)updateSublayersWithScale:(double)a0;

@end
