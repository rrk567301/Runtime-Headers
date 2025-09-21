@class NSString, IRContext, NSDictionary;

@interface IRServicePackageAdapterHome : NSObject <IRServicePackageAdapter, IRAnalytics> {
    void /* function */ PREFIX;
}

@property (nonatomic, readonly) NSString *PREFIX;
@property (nonatomic, retain) IRContext *context;
@property (nonatomic, readonly) NSDictionary *contexts;
@property (nonatomic, readonly) NSDictionary *policyInspections;

- (id)init;
- (void).cxx_destruct;
- (id)filterHistory:(id)a0 withCandidatesContainer:(id)a1;
- (BOOL)generateClassificationsWithCandiatesContainer:(id)a0 systemState:(id)a1 historyEventsContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 fillInspection:(BOOL)a5 date:(id)a6;
- (id)getSignificantBundlesWithCandidates:(id)a0 fromHistory:(id)a1;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0 historyEventsAsc:(id)a1;
- (BOOL)shouldConsiderEventForSignificantBundles:(id)a0;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1 withSystemState:(id)a2 forCandidate:(id)a3 date:(id)a4;

@end
