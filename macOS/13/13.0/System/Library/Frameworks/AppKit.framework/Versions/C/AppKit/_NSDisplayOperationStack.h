@class NSMutableArray;

@interface _NSDisplayOperationStack : NSObject {
    NSMutableArray *_stack;
    BOOL _threadIsViewDrawOperationThread;
}

+ (void)initialize;
+ (id)description;
+ (id)currentThreadDisplayOperationStack;
+ (BOOL)anyThreadHasActiveDisplayOperationForWindow:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)setRectSetBeingDrawn:(id)a0 forView:(id)a1;
- (id)rectSetBeingDrawnForView:(id)a0;
- (id)clipRootView;
- (BOOL)attemptingConcurrentViewDrawing;
- (void)setAttemptingConcurrentViewDrawing:(BOOL)a0;
- (void)queueDrawOperationForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rectSet:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4;
- (void)blockOnAllRemainingDrawOperations;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)a0;
- (void)enterDisplayOperationForWindow:(id)a0 windowRegion:(id)a1;
- (void)exitDisplayOperationForWindow:(id)a0;
- (void)enterViewWillDrawOperationForWindow:(id)a0 windowRegion:(id)a1 clipRootView:(id)a2;
- (void)exitViewWillDrawOperationForWindow:(id)a0;
- (BOOL)viewWillDrawOperationIsActive;
- (id)windowBeingDrawn;
- (id)windowRegionBeingDrawn;
- (id)totalWindowRegionBeingDrawnByEnclosingDisplayOperations;
- (BOOL)threadIsViewDrawOperationThread;
- (void)setThreadIsViewDrawOperationThread:(BOOL)a0;

@end
