@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {
    double _previousInterval;
}

@property double defaultTestDuration;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTest;
- (void)tearDown;
- (void).cxx_destruct;
- (void)setUp;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;
- (void)cloudKitEventNotificationManager:(id)a0 syncStateDidChange:(id)a1;
- (id)createSyncStatisticsForMockSyncState:(id)a0;
- (void)sendSyncStateChangedEvent;
- (void)updateMockSyncState;
- (void)willSendSyncState:(id)a0 withSyncStatistics:(id)a1;
- (void)willUpdateSyncState:(id)a0;

@end
