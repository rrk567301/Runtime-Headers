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

- (void)_performMigrationsIfNeeded;
- (void)dealloc;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_resetBlacklistWithSet:(id)a0;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (id)init;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (void)_listenForUpdates;
- (id)disabledBundleIds;
- (void)_updateBlacklist;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void).cxx_destruct;

@end
