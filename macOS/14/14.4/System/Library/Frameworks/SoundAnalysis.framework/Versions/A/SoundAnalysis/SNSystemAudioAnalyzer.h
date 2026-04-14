@interface SNSystemAudioAnalyzer : NSObject {
    void /* unknown type, empty encoding */ impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;
+ (id)selectAppropriateImplForThisProcess;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithImpl:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)removeRequest:(id)a0;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;
- (id)initWithAudioConfiguration:(id)a0;
- (void)removeAllRequests;

@end
