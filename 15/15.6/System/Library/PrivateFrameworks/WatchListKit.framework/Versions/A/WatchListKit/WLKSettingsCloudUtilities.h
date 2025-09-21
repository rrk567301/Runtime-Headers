@interface WLKSettingsCloudUtilities : NSObject

+ (id)_connection;
+ (id)_queue;
+ (void)_runResetAccountWithCompletion:(id /* block */)a0;
+ (void)updateCloudStoreWithCompletion:(id /* block */)a0;
+ (void)deleteAllHistoryWithCompletion:(id /* block */)a0;
+ (void)updateLocalStoreWithCompletion:(id /* block */)a0;
+ (void)_cloudSyncEnabledWithCompletion:(id /* block */)a0;
+ (void)_fetchSyncDictionary:(id /* block */)a0;
+ (void)_postChangeDictionaryToCloud:(id)a0 completion:(id /* block */)a1;
+ (void)_runSynchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)a0;
+ (void)_runUpdateCloudStoreAppSettings:(id)a0 deleteHistory:(char)a1 removeEntry:(char)a2 completion:(id /* block */)a3;
+ (char)_shouldContinueWithCloudSyncResult:(char)a0 onDisabledHandler:(id /* block */)a1;
+ (id)_syncDictionaryForAppSettings:(id)a0;
+ (id)_syncDictionaryForLocalStore;
+ (void)forceUpdateWithCompletion:(id /* block */)a0;
+ (void)resetAccountWithCompletion:(id /* block */)a0;
+ (char)synchronizeSettingsFromCloudIfNeeded:(id *)a0;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)a0;
+ (void)updateCloudStoreAccountLevelSetting:(id)a0 value:(id)a1 completion:(id /* block */)a2;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(char)a1 completion:(id /* block */)a2;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(char)a1 removeEntry:(char)a2 completion:(id /* block */)a3;

@end
