@class NSMutableArray;

@interface _NSDisplayOperationStack : NSObject {
    NSMutableArray *_stack;
    BOOL _threadIsViewDrawOperationThread;
}

+ (id)description;
+ (void)initialize;
+ (id)currentThreadDisplayOperationStack;
+ (BOOL)anyThreadHasActiveDisplayOperationForWindow:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)enterDisplayOperationForWindow:(id)a0 windowRegion:(id)a1;
- (void)setRectSetBeingDrawn:(id)a0 forView:(id)a1;
- (void)exitDisplayOperationForWindow:(id)a0;
- (BOOL)threadIsViewDrawOperationThread;
- (id)rectSetBeingDrawnForView:(id)a0;
- (BOOL)attemptingConcurrentViewDrawing;
- (id)windowRegionBeingDrawn;
- (void)queueDrawOperationForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rectSet:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)a0;
- (void)setAttemptingConcurrentViewDrawing:(BOOL)a0;
- (void)blockOnAllRemainingDrawOperations;
- (id)totalWindowRegionBeingDrawnByEnclosingDisplayOperations;
- (id)clipRootView;
- (void)enterViewWillDrawOperationForWindow:(id)a0 windowRegion:(id)a1 clipRootView:(id)a2;
- (void)exitViewWillDrawOperationForWindow:(id)a0;
- (BOOL)viewWillDrawOperationIsActive;
- (id)windowBeingDrawn;
- (void)setThreadIsViewDrawOperationThread:(BOOL)a0;

@end
