@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithAppPredictionBlacklist;
+ (id)sharedInstanceWithoutAppPredictionBlacklist;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (char)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(char)a2;
- (id)initWithAppPredictionBlacklist:(id)a0;
- (void)_handlePrefsChange;
- (id)_prefsDisabledApps;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (id)disabledBundlesInSettings;
- (id)homeScreenDisabledShortcutsInSettings;
- (char)isBundleIdBlacklisted:(id)a0;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;
- (char)shouldPredictBundleId:(id)a0 action:(id)a1;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;

@end
