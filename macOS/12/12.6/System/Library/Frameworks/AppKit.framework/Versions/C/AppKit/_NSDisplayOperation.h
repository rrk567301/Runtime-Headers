@class NSMapTable, NSRegion, NSView, NSOperationQueue, NSWindow;

@interface _NSDisplayOperation : NSObject {
    NSWindow *_window;
    NSRegion *_windowRegion;
    NSMapTable *_viewToRectSetMapTable;
    BOOL _isViewWillDrawOperation;
    NSView *_clipRootView;
    NSOperationQueue *_viewDrawOperationQueue;
    NSMapTable *_viewToDrawOperationMapTable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _viewToDrawOperationMapTableLock;
    BOOL _attemptingConcurrentViewDrawing;
}

- (void)dealloc;
- (id)description;
- (id)window;
- (void)setRectSetBeingDrawn:(id)a0 forView:(id)a1;
- (id)rectSetBeingDrawnForView:(id)a0;
- (BOOL)attemptingConcurrentViewDrawing;
- (void)queueDrawOperationForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rectSet:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)a0;
- (void)setAttemptingConcurrentViewDrawing:(BOOL)a0;
- (void)blockOnAllRemainingDrawOperations;
- (id)drawOperationForView:(id)a0;
- (void)queueViewDrawOperation:(id)a0;
- (id)viewDrawOperationQueue;
- (id)initWithWindow:(id)a0 windowRegion:(id)a1;
- (id)windowRegion;
- (BOOL)isViewWillDrawOperation;
- (void)setViewWillDrawOperation:(BOOL)a0;
- (id)clipRootView;
- (void)setClipRootView:(id)a0;
- (void)dequeueViewDrawOperation:(id)a0;

@end
