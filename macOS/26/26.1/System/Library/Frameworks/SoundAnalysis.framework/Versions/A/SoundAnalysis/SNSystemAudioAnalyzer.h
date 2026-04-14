@interface SNSystemAudioAnalyzer : NSObject {
    void /* unknown type, empty encoding */ impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (void)start;
- (void)removeRequest:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;
- (id)initWithAudioConfiguration:(id)a0;
- (void)removeAllRequests;

@end
