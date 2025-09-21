@interface VoiceActions.VANRDelegateBridge : _TtCs12_SwiftObject <VoiceActions.VAKeywordSpotterDelegate, VoiceActions.VAASRDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ errorDelegate;
    void /* unknown type, empty encoding */ keywordsToName;
    void /* unknown type, empty encoding */ keywordsToEnrollments;
    void /* unknown type, empty encoding */ systemConfig;
    void /* unknown type, empty encoding */ debugInfo;
    void /* unknown type, empty encoding */ lastActivated;
    void /* unknown type, empty encoding */ clock;
}

- (void)keywordSpotterDidDetectKeywordWithEvent:(id)a0;
- (void)keywordSpotterDidStopWithSummaryWithJson:(id)a0 uuid:(id)a1 perfLogs:(id)a2;
- (void)speechResultsWithResult:(id)a0;

@end
