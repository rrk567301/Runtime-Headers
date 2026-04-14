@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter *_adapter;
}

@property (readonly, nonatomic) NSArray *trackedEvaluations;

+ (id)mockTrackerForPlanId:(id)a0;
+ (id)mockTracker;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)initWithAdapter:(id)a0 modelInfo:(id)a1;
- (void)clearTrackedMessages;
- (id)trackedEvaluations;

@end
