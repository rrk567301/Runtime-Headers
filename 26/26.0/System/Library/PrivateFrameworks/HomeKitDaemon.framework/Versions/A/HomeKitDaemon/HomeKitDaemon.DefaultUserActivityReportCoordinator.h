@interface HomeKitDaemon.DefaultUserActivityReportCoordinator : SwiftNativeNSObject <HMDUserActivityStateDetectorStateChangeDelegate, HMDUserActivityReportCoordinator> {
    void /* unknown type, empty encoding */ homeUUID;
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ backgroundTaskManager;
    void /* unknown type, empty encoding */ periodicUpdateInterval;
    void /* unknown type, empty encoding */ periodicUpdateTimerIdentifier;
    void /* unknown type, empty encoding */ isCoordinating;
    void /* unknown type, empty encoding */ detectorsByContributorType;
    void /* unknown type, empty encoding */ currentReports;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void)beginCoordinationWithCompletion:(void (^)(void))a0;
- (void)configureWithDetectors:(id)a0 removeDetectors:(id)a1;
- (void)endCoordinationWithReason:(unsigned long long)a0 completion:(void (^)(void))a1;
- (void)handleBackgroundTaskManagerTimerFiredWithNotification:(id)a0;
- (void)handleStateChangeForDetectorOfType:(unsigned long long)a0 withReason:(unsigned long long)a1;
- (void)isCoordinatingWithCompletion:(void (^)(BOOL))a0;
- (void)sendCoordinatedReportsForReason:(unsigned long long)a0;

@end
