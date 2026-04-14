@class NSDictionary;

@interface IRServicePackageAdapterHome : NSObject <IRServicePackageAdapter, IRAnalytics> {
    void /* unknown type, empty encoding */ generalHomeSuggester;
    void /* unknown type, empty encoding */ siriHomeSuggester;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (nonatomic, readonly) NSDictionary *policyInspections;

- (void).cxx_destruct;
- (id)init;
- (id)filterHistory:(id)a0 withCandidatesContainer:(id)a1;
- (BOOL)generateClassificationsWithCandiatesContainer:(id)a0 systemState:(id)a1 historyEventsContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 fillInspection:(BOOL)a5 date:(id)a6;
- (id)generateSuggestionsWithTargets:(id)a0 miloPrediction:(id)a1 homekitManager:(id)a2 date:(id)a3;
- (id)getSignificantBundlesWithCandidates:(id)a0 fromHistory:(id)a1;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0 historyEventsAsc:(id)a1;
- (BOOL)shouldConsiderEventForSignificantBundles:(id)a0;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1 withSystemState:(id)a2 forCandidate:(id)a3 date:(id)a4;

@end
