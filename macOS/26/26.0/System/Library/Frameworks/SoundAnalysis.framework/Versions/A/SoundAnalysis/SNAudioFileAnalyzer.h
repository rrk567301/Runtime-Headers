@class _SNAudioFileAnalyzer;

@interface SNAudioFileAnalyzer : NSObject {
    _SNAudioFileAnalyzer *_impl;
}

- (id)detailedDescription;
- (id)impl;
- (id)initWithImpl:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)removeRequest:(id)a0;
- (void)analyze;
- (void).cxx_destruct;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (void)analyzeInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)cancelAnalysis;
- (void)removeAllRequests;

@end
