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

- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_listenForUpdates;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)dealloc;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (id)disabledBundleIds;
- (void).cxx_destruct;
- (void)_performMigrationsIfNeeded;
- (void)_updateBlacklist;
- (id)init;
- (void)_resetBlacklistWithSet:(id)a0;

@end
