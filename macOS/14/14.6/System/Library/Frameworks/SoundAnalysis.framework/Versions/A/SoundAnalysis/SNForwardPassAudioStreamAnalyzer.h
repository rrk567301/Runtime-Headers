@class NSString;

@interface SNForwardPassAudioStreamAnalyzer : NSObject {
    void /* unknown type, empty encoding */ processorCache;
    void /* unknown type, empty encoding */ processingContexts;
    void /* unknown type, empty encoding */ processingTree;
    void /* unknown type, empty encoding */ currentFormat;
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ analyzerInfos;
    void /* unknown type, empty encoding */ shouldRebuildProcessingTree;
    void /* unknown type, empty encoding */ totalReceivedTime;
    void /* unknown type, empty encoding */ mostRecentReceivedTimeRange;
    void /* unknown type, empty encoding */ latestResultEndTime;
}

@property (nonatomic, readonly) NSString *detailedDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)removeRequest:(id)a0;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)analyzeAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 withAudioFrameCount:(unsigned int)a1 atAudioFramePosition:(long long)a2;
- (void)completeAnalysis;
- (void)removeAllRequests;
- (void)sendErrorToAllRequests:(id)a0;
- (void)writeDSPGraphDotFilesToDirectory:(id)a0;

@end
