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

- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (id)_generateCountsOfWordsForAlignmentConfidences;
- (void)dispatchEventWithPayload:(id)a0;
- (void)registerEventSpec;
- (id)init;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)_generateFeatureUsageMetricsForContext:(id)a0;
- (id)_generateMetadataForTypingSessionFromContext:(id)a0;
- (id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)a0;
- (void).cxx_destruct;

@end
