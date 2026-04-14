@interface SensitiveContentAnalysis.VideoStreamAnalysisDispatcher : SwiftNativeNSObject <SensitiveContentAnalysis.VideoStreamAnalyzerXPCProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calls;
    void /* unknown type, empty encoding */ prioritizer;
    void /* unknown type, empty encoding */ coreAnalyticsManager;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ clientListener;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ upConnections;
    void /* unknown type, empty encoding */ downConnections;
}

- (id)init;
- (void)continueStreamWithAnalyzerUUID:(id)a0;
- (void)childAnalysisChangedWithAnalysis:(id)a0 error:(id)a1 analyzerUUID:(id)a2;
- (void)childFrameDetailsChangedWithAnalyzerUUID:(id)a0 newFrameSize:(id)a1 newRegionOfInterest:(id)a2 newOrientation:(unsigned int)a3;
- (void)establishConnectionWithReply:(id /* block */)a0;
- (void)fetchAggregateStatsForCallWithReply:(id /* block */)a0;
- (void)parentAnalysisChangedWithAnalysis:(id)a0 error:(id)a1 analyzerUUID:(id)a2;
- (void)updateBaseSamplingIntervalWithAnalyzerUUID:(id)a0 to:(id)a1;

@end
