@class NSString, NSMutableDictionary, NSMutableSet, HDProfile, HDBackgroundAppLauncher, NSObject;
@protocol OS_dispatch_queue, HDBackgroundAppRefreshSettings;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    id<HDBackgroundAppRefreshSettings> _appRefreshSettings;
    NSMutableSet *_observedDataTypeCodes;
    NSMutableDictionary *_outstandingLaunchesByBundleIdentifier;
    BOOL _shouldScheduleLaunches;
    HDProfile *_profile;
    HDBackgroundAppLauncher *_backgroundAppLauncher;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableDictionary *_pendingTypeCodesToAnchors;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
}

@property (copy, nonatomic) id /* block */ unitTesting_backgroundAppRefreshStatusGenerator;
@property (copy, nonatomic) id /* block */ unitTesting_didUpdateObservingDataTypeCode;
@property (copy, nonatomic) id /* block */ unitTesting_launchEventHandler;
@property (readonly, nonatomic) id<HDBackgroundAppRefreshSettings> appRefreshSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)setAnchor:(id)a0 forDataCode:(long long)a1 type:(long long)a2;
- (id)init;
- (void)ackForBundleID:(id)a0 dataTypes:(id)a1 anchor:(id)a2 ackTime:(id)a3;
- (void)removeBundleID:(id)a0;
- (void)removeSubscriptionForBundleID:(id)a0 dataCode:(long long)a1;
- (id)initWithProfile:(id)a0 backgroundAppRefreshSettings:(id)a1;
- (void)unitTesting_synchronizeWithQueue;
- (BOOL)unitTesting_isAwaitingLaunchForBundleID:(id)a0 dataTypeCode:(long long)a1;
- (void)subscribeForBundleID:(id)a0 dataCode:(long long)a1 frequencyInSeconds:(unsigned long long)a2 appSDKVersionToken:(unsigned long long)a3;
- (BOOL)unitTesting_isObservingDataTypeCode:(long long)a0;
- (void)_isBackgroundAppRefreshDisabledForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
