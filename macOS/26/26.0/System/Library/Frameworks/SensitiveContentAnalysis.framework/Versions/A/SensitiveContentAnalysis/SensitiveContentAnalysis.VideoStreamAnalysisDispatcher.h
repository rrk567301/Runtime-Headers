@interface SensitiveContentAnalysis.VideoStreamAnalysisDispatcher : NSObject <SensitiveContentAnalysis.VideoStreamAnalyzerXPCProtocol> {
    void /* unknown type, empty encoding */ all;
    void /* unknown type, empty encoding */ prioritizer;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ _upConnections;
    void /* unknown type, empty encoding */ _downConnections;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)continueStreamWithAnalyzerUUID:(id)a0;
- (void)childAnalysisChangedWithAnalysis:(id)a0 error:(id)a1 analyzerUUID:(id)a2;
- (void)childFrameDetailsChangedWithAnalyzerUUID:(id)a0 newFrameSize:(id)a1 newRegionOfInterest:(id)a2 newOrientation:(unsigned int)a3;
- (void)establishConnectionWithReply:(id /* block */)a0;
- (void)parentAnalysisChangedWithAnalysis:(id)a0 error:(id)a1 analyzerUUID:(id)a2;
- (void)updateBaseSamplingIntervalWithAnalyzerUUID:(id)a0 to:(id)a1;

@end
