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

- (id)getCurrentTrackersAndReset;
- (BOOL)_performOrderedRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)orderedRequestsForRequests:(id)a0;
- (void)recordSequencedObservationsForRequest:(id)a0;
- (id)previousSequencedObservationsForRequest:(id)a0;
- (void)cancelAllRequests;
- (BOOL)performRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)dependencyAnalyzedRequestsForRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
- (void)_groupOrderedRequests:(id)a0 ordinality:(id)a1 ordinalityAndPriorityGroups:(id)a2;
- (id)init;
- (void)recordTracker:(id)a0;
- (BOOL)_validateAndPrepareRequests:(id)a0 error:(id *)a1;
- (void)_groupsRequestsWithTheSameOrdinality:(id)a0 priorityGroup1:(id)a1 priorityGroup2:(id)a2;
- (BOOL)_performRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)performDependentRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
