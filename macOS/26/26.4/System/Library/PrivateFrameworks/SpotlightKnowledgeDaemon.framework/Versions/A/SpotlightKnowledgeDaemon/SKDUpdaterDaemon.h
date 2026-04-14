@class SKDScheduler;

@interface SKDUpdaterDaemon : NSObject {
    void /* unknown type, empty encoding */ constants;
    void /* unknown type, empty encoding */ pipelineManager;
    void /* unknown type, empty encoding */ pipelineStateProvider;
    void /* unknown type, empty encoding */ metricsCollector;
    void /* unknown type, empty encoding */ metricsJob;
    void /* unknown type, empty encoding */ defaultsProvider;
    void /* unknown type, empty encoding */ featureFlagProvider;
    void /* unknown type, empty encoding */ rootDirectory;
    void /* unknown type, empty encoding */ fileSystemProvider;
    void /* unknown type, empty encoding */ processingCollector;
    void /* unknown type, empty encoding */ stateManager;
    void /* unknown type, empty encoding */ cacheDeleteResponder;
}

@property (class, nonatomic, readonly) SKDUpdaterDaemon *shared;

@property (nonatomic, readonly) SKDScheduler *scheduler;

- (BOOL)handleCommand:(const char *)a0 info:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)handleCoreSpotlightEvent:(id)a0;
- (void)handleDeviceLockChange:(long long)a0;
- (void)handleNonExtensionBundleCheckedInBundleID:(id)a0;

@end
