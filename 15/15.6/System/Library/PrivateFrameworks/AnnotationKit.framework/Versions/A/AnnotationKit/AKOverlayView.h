@class AKPageController, NSScrollView, AKMainEventHandler;

@interface AKOverlayView : NSView

@property (weak) AKPageController *pageController;
@property (weak) AKMainEventHandler *mainEventHandler;
@property char isObserving;
@property char deferWasMovedToSuperviewUntilMoveToWindow;
@property (retain) NSScrollView *observedScrollView;
@property char scrollViewIsInLiveMagnify;

- (void)dealloc;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)draggingExited:(id)a0;
- (void)delete:(id)a0;
- (char)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)becomeFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)paste:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)updateLayers;
- (id)annotationController;
- (void)duplicate:(id)a0;
- (char)_hasSelectedAnnotations;
- (void)_postScrollViewRectChangedNotification;
- (void)_postScrollViewScrollOrMagnifyEndNotification;
- (void)_selectedAnnotationsDidChange;
- (void)_setupObservation;
- (void)_teardownObservation;
- (void)_updateLayersUsingScrollView;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(char)a0;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(char)a0 dismissSelectionMenu:(char)a1;
- (void)_wasMovedToNewSuperview;
- (void)_willEndLiveMagnify:(id)a0;
- (void)_willRemoveFromOldSuperview;
- (void)_willStartLiveMagnify:(id)a0;
- (id)initWithPageController:(id)a0;

@end
