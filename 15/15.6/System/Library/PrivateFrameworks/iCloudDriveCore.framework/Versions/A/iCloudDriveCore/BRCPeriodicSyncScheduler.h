@class BRCUserDefaults, NSString, BRCAccountSession, NSDate, NSObject, BRCContainerScheduler;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCPeriodicSyncScheduler : NSObject <BRCReachabilityDelegate, BRCScreenLockDelegate> {
    BRCContainerScheduler *_containerScheduler;
    BRCAccountSession *_session;
    NSString *_personaIdentifier;
}

@property (retain, nonatomic) NSDate *lastPeriodicSyncDate;
@property (nonatomic) char shouldTriggerPeriodicSync;
@property (nonatomic) char periodicSyncInProgress;
@property (readonly, nonatomic) char closed;
@property (nonatomic) char isNetworkReachable;
@property (retain, nonatomic) NSDate *networkConnectTime;
@property (retain, nonatomic) NSDate *networkDisconnectTime;
@property (nonatomic) char isScreenLocked;
@property (retain, nonatomic) NSDate *screenUnlockedTime;
@property (retain, nonatomic) NSDate *appLibrariesLastBoostTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicSyncRequestTimer;
@property (retain, nonatomic) BRCUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)periodicSyncLastSyncDateKey;

- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)networkReachabilityChanged:(char)a0;
- (void)screenLockChanged:(char)a0;
- (void)_appLibraryDidBoostForPresenterNotificationHandler:(id)a0;
- (void)_cancelPeriodicSyncRequestScheduler;
- (void)_markNeedPeriodicSync;
- (void)_periodicSyncCompletionWithError:(id)a0;
- (void)_registerToNotifications;
- (void)_schedulePeriodicSyncRequest;
- (void)_tiggerPeriodicSync;
- (double)_timeIntervalSinceLastPeriodicSync;
- (void)_unregisterToNotifications;
- (id)initWithContainerScheduler:(id)a0 session:(id)a1;

@end
