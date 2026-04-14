@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithoutAppPredictionBlacklist;
+ (id)sharedInstanceWithAppPredictionBlacklist;

- (id)homeScreenDisabledShortcutsInSettings;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;
- (void)dealloc;
- (id)initWithAppPredictionBlacklist:(id)a0;
- (BOOL)shouldPredictBundleId:(id)a0 action:(id)a1;
- (void)_handlePrefsChange;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;
- (id)init;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (id)_prefsDisabledApps;
- (id)disabledBundlesInSettings;
- (BOOL)isBundleIdBlacklisted:(id)a0;
- (void).cxx_destruct;

@end
