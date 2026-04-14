@class _SNAudioStreamAnalyzer;

@interface SNAudioStreamAnalyzer : NSObject {
    _SNAudioStreamAnalyzer *_impl;
}

- (id)detailedDescription;
- (id)impl;
- (id)initWithImpl:(id)a0;
- (id)new;
- (id)init;
- (id)initWithFormat:(id)a0;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)completeAnalysis;
- (void)removeAllRequests;

@end
