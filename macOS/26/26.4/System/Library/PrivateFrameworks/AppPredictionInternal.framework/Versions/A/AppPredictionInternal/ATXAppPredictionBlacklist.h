@class NSUserDefaults, _ATXGlobals, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}

+ (id)sharedInstance;

- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_updateBlacklist;
- (void)_listenForUpdates;
- (void)_resetBlacklistWithSet:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (id)init;
- (void)_performMigrationsIfNeeded;
- (id)disabledBundleIds;
- (void)dealloc;

@end
