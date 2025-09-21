@class NSDate, NSString, HKObserverSet, _HKDelayedOperation, NSDictionary, HDProfile, NSObject, NSNumber;
@protocol OS_dispatch_queue, HDUserCharacteristicsProfileObserver;

@interface HDUserCharacteristicsManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject, HDNanoSyncManagerObserver, HDCloudSyncManagerObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDUserCharacteristicsProfileObserver> *_observers;
    char _shouldUpdateQuantityCharacteristics;
    int _significantTimeChangeNotificationToken;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    char _needsUpdateAfterUnlock;
    NSNumber *_hasWatchOnAccount;
    char _isCloudSyncEnabled;
    _HKDelayedOperation *_updateOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (double)restingCaloriesFromTotalCalories:(double)a0 timeInterval:(double)a1 authorizedToRead:(char)a2;
- (char)_setUserCharacteristic:(id)a0 forType:(id)a1 shouldInsertSample:(char)a2 updateProfileAndSync:(char)a3 error:(id *)a4;
- (void)addProfileObserver:(id)a0;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastLitePushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(char)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (void)didReceiveAuthKitDeviceListChangeNotification:(id)a0;
- (void)didReceiveDayChangeNotification:(id)a0;
- (id)modificationDateForCharacteristicWithType:(id)a0 error:(id *)a1;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)removeProfileObserver:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (char)setUserCharacteristic:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)a0 completion:(id /* block */)a1;
- (id)userCharacteristicForType:(id)a0 error:(id *)a1;

@end
