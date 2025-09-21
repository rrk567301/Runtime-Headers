@class NSMapTable, NSRegion, NSView, NSOperationQueue, NSWindow;

@interface _NSDisplayOperation : NSObject {
    NSWindow *_window;
    NSRegion *_windowRegion;
    NSMapTable *_viewToRegionMapTable;
    char _isViewWillDrawOperation;
    NSView *_clipRootView;
    NSOperationQueue *_viewDrawOperationQueue;
    NSMapTable *_viewToDrawOperationMapTable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _viewToDrawOperationMapTableLock;
    char _attemptingConcurrentViewDrawing;
}

- (void)dealloc;
- (id)description;
- (id)window;
- (char)attemptingConcurrentViewDrawing;
- (void)blockOnAllRemainingDrawOperations;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)a0;
- (id)clipRootView;
- (void)dequeueViewDrawOperation:(id)a0;
- (id)drawOperationForView:(id)a0;
- (id)initWithWindow:(id)a0 windowRegion:(id)a1;
- (char)isViewWillDrawOperation;
- (void)queueDrawOperationForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 region:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4;
- (void)queueViewDrawOperation:(id)a0;
- (id)regionBeingDrawnForView:(id)a0;
- (void)setAttemptingConcurrentViewDrawing:(char)a0;
- (void)setClipRootView:(id)a0;
- (void)setRegionBeingDrawn:(id)a0 forView:(id)a1;
- (void)setViewWillDrawOperation:(char)a0;
- (id)viewDrawOperationQueue;
- (id)windowRegion;

@end
