@interface CallIntelligence.SoundClassificationResultsProvider : NSObject <AVCMediaAnalyzerDelegate> {
    void /* unknown type, empty encoding */ soundAnalyzerEventStream;
    void /* unknown type, empty encoding */ soundAnalyzerEventStreamContinuation;
    void /* unknown type, empty encoding */ mediaAnalyzerMutex;
    void /* unknown type, empty encoding */ dutyCycleLength;
    void /* unknown type, empty encoding */ dutyCycleInitialDelay;
    void /* unknown type, empty encoding */ dutyCyclingTask;
    void /* unknown type, empty encoding */ mediaAnalysisEventStream;
    void /* unknown type, empty encoding */ mediaAnalysisEventStreamContinuation;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ aggregator;
}

- (id)init;
- (void).cxx_destruct;
- (void)mediaAnalyzer:(id)a0 didEnable:(BOOL)a1 error:(id)a2;
- (void)mediaAnalyzer:(id)a0 didProduceMediaAnalysisResult:(id)a1 streamToken:(long long)a2;
- (void)mediaAnalyzerServerDidDie:(id)a0;

@end
