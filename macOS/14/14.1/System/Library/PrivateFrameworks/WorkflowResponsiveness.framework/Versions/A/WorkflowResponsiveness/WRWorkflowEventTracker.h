@class WRTimestampAndThread, NSArray, NSMutableDictionary, WRSignpost, NSMutableArray, WRWorkflow;

@interface WRWorkflowEventTracker : NSObject {
    NSMutableArray *_allSignpostTrackersMutable;
    NSMutableArray *_openIndividuatedIntervalsWithMatchingEndSignpostOutsideEvent;
    id /* block */ _eventCompletionCallback;
    NSMutableArray *_candidateEndSignpostTrackers;
    WRTimestampAndThread *_overallIntervalStart;
    WRSignpost *_startSignpost;
}

@property (readonly) WRWorkflow *workflow;
@property (readonly) NSArray *allSignpostTrackers;
@property (readonly) NSMutableDictionary *environment;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (void)handleSignpost:(id)a0;
- (id)initWithWorkflow:(id)a0 eventCompletionCallback:(id /* block */)a1;
- (BOOL)inMiddleOfEvent;

@end
