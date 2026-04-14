@class NSMutableArray;

@interface _NSGestureRecognizerFailureMap : NSObject {
    NSMutableArray *_gestureRecognizers;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents;

+ (void)buildFailureMapForGestureRecognizers:(id)a0;
+ (void)buildFailureMapForGestureRecognizer:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithRelatedGestures:(id)a0;
- (void)reloadFailureMap;
- (void)rebuildFailureMap;
- (void)gestureRecognizerDeallocated:(id)a0;
- (void)gestureRecognizerBecameDirty:(id)a0;
- (void)_gestureRecognizerFinished:(id)a0;
- (void)_queueRecognizersForResetIfFinished;
- (void)gestureRecognizerFinished:(id)a0;
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)a0;

@end
