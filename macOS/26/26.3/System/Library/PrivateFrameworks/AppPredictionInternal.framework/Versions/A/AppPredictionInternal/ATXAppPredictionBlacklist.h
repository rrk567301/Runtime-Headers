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
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (void)_updateBlacklist;
- (id)init;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_listenForUpdates;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resetBlacklistWithSet:(id)a0;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (id)disabledBundleIds;

@end
