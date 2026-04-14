@class AKPageController, NSScrollView, AKMainEventHandler;

@interface AKOverlayView : NSView

@property (weak) AKPageController *pageController;
@property (weak) AKMainEventHandler *mainEventHandler;
@property BOOL isObserving;
@property BOOL deferWasMovedToSuperviewUntilMoveToWindow;
@property (retain) NSScrollView *observedScrollView;
@property BOOL scrollViewIsInLiveMagnify;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewDidEndLiveResize;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)updateLayers;
- (id)initWithPageController:(id)a0;
- (void)_teardownObservation;
- (void)_updateLayersUsingScrollView;
- (void)_postScrollViewScrollOrMagnifyEndNotification;
- (void)_willRemoveFromOldSuperview;
- (void)_wasMovedToNewSuperview;
- (void)_postScrollViewRectChangedNotification;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)a0;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)a0 dismissSelectionMenu:(BOOL)a1;
- (void)_willStartLiveMagnify:(id)a0;
- (void)_willEndLiveMagnify:(id)a0;
- (void)_setupObservation;

@end
