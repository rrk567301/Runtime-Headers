@class NSString, TITypingSessionAligned, NSMutableDictionary, TITypingSession;

@interface TITypingSessionAlignmentConfidenceAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    NSMutableDictionary *_payload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)a0;
- (id)_generateFeatureUsageMetricsForContext:(id)a0;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)init;
- (void)dispatchEventWithPayload:(id)a0;
- (id)_generateCountsOfWordsForAlignmentConfidences;
- (void).cxx_destruct;
- (void)registerEventSpec;
- (id)_generateMetadataForTypingSessionFromContext:(id)a0;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;

@end
