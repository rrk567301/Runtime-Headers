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

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)registerEventSpec;
- (id)_generateCountsOfWordsForAlignmentConfidences;
- (id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)a0;
- (id)_generateMetadataForTypingSessionFromContext:(id)a0;
- (id)_generateFeatureUsageMetricsForContext:(id)a0;
- (void)dispatchEventWithPayload:(id)a0;

@end
