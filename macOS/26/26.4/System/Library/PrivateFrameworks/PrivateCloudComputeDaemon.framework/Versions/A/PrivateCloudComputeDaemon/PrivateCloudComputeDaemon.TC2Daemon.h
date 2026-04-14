@interface PrivateCloudComputeDaemon.TC2Daemon : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ systemInfo;
    void /* unknown type, empty encoding */ serverDrivenConfig;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ prefetchActivity;
    void /* unknown type, empty encoding */ updateServerDrivenConfigurationActivity;
    void /* unknown type, empty encoding */ rateLimiter;
    void /* unknown type, empty encoding */ attestationStore;
    void /* unknown type, empty encoding */ attestationVerifier;
    void /* unknown type, empty encoding */ dailyActiveUserReporter;
    void /* unknown type, empty encoding */ featureUsageAnalyzerScheduledActivity;
    void /* unknown type, empty encoding */ tapToRadarController;
    void /* unknown type, empty encoding */ componentTimeMeasurementReporter;
    void /* unknown type, empty encoding */ nodeDistributionAnalyzer;
    void /* unknown type, empty encoding */ featureUsageAnalyzer;
    void /* unknown type, empty encoding */ nodeDistributionReportActivity;
    void /* unknown type, empty encoding */ preferencesStore;
    void /* unknown type, empty encoding */ featureFlagChecker;
    void /* unknown type, empty encoding */ fetchServerDrivenConfigurationValve;
    void /* unknown type, empty encoding */ expiredBuildNotification;
    void /* unknown type, empty encoding */ thimbledEventStream;
    void /* unknown type, empty encoding */ thimbledEventContinuation;
    void /* unknown type, empty encoding */ structuredRequestFactoriesBySetup;
    void /* unknown type, empty encoding */ prefetchTracker;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
