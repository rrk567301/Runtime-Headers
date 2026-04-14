@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestCancelling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _trackersInFlightLock;
    NSMutableSet *_trackersInFlight;
    NSMutableDictionary *_sequencedRequestObservations;
}

+ (id)_requestPerformingQueuePriorityGroup1;
+ (id)_requestPerformingQueuePriorityGroup2;

- (id)orderedRequestsForRequests:(id)a0;
- (void)recordTracker:(id)a0;
- (BOOL)_performRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)_performOrderedRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)getCurrentTrackersAndReset;
- (id)init;
- (void)recordSequencedObservationsForRequest:(id)a0;
- (BOOL)performRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)dependencyAnalyzedRequestsForRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
- (void)_groupOrderedRequests:(id)a0 ordinality:(id)a1 ordinalityAndPriorityGroups:(id)a2;
- (void)_groupsRequestsWithTheSameOrdinality:(id)a0 priorityGroup1:(id)a1 priorityGroup2:(id)a2;
- (BOOL)_validateAndPrepareRequests:(id)a0 error:(id *)a1;
- (id)previousSequencedObservationsForRequest:(id)a0;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (BOOL)performDependentRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
