@class _SNAudioStreamAnalyzer;

@interface SNAudioStreamAnalyzer : NSObject {
    _SNAudioStreamAnalyzer *_impl;
}

- (id)new;
- (id)detailedDescription;
- (id)initWithImpl:(id)a0;
- (id)impl;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (id)initWithFormat:(id)a0;
- (id)init;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)completeAnalysis;
- (void)removeAllRequests;

@end
