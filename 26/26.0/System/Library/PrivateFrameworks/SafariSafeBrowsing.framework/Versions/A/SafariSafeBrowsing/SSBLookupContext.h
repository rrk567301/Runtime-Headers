@interface SSBLookupContext : NSObject {
    struct shared_ptr<SafeBrowsing::LookupContext> { struct LookupContext *__ptr_; struct __shared_weak_count *__cntrl_; } _lookupContext;
    unsigned int _observerToken;
}

+ (id)sharedLookupContext;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(id /* block */)a0;
- (void)_deleteAllDatabasesWithCompletionHandler:(id /* block */)a0;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)a0;
- (void)_forceDatabaseUpdateWithCompletionHandler:(id /* block */)a0;
- (void)_forceDeviceIdentificationTokenUpdateWithCompletionHandler:(id /* block */)a0;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(id /* block */)a0;
- (void)_forceLookUpURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getDatabaseStatusWithCompletionHandler:(id /* block */)a0;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:(id /* block */)a0;
- (void)_getSafeBrowsingEnabledState:(id /* block */)a0;
- (void)_getServiceStatusWithCompletionHandler:(id /* block */)a0;
- (void)_lookUpURL:(id)a0 isMainFrame:(BOOL)a1 hasHighConfidenceOfSafety:(BOOL)a2 ignoreEnableState:(int)a3 completionHandler:(id /* block */)a4;
- (void)_lookUpURLs:(id)a0 forProtectionType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_setSafeBrowsingEnabledStateNeedsUpdate;
- (void)lookUpURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)lookUpURL:(id)a0 isMainFrame:(BOOL)a1 hasHighConfidenceOfSafety:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
