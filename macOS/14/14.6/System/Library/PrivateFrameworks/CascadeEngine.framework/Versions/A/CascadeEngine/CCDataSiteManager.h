@class NSString, CCDictionaryLog, CCDataSiteCache, NSURL, NSMutableDictionary, CCSettings, NSObject;
@protocol OS_dispatch_queue;

@interface CCDataSiteManager : NSObject {
    NSURL *_rootDirectoryURL;
    CCSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    CCDictionaryLog *_managerInfo;
    CCDataSiteCache *_dataSiteCache;
    NSMutableDictionary *_dataSiteWriterCache;
    BOOL _loadedDataSites;
    NSString *_localDeviceId;
    BOOL _shouldCacheWriters;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)clearAllState;
- (BOOL)clearDataSiteWithUserId:(id)a0;
- (id)_cachedDataSiteForSet:(id)a0;
- (BOOL)_didRunMaintenance:(id /* block */)a0 accessAssertion:(id)a1;
- (BOOL)_isDataProtectionError:(id)a0;
- (BOOL)_loadDataSites;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_removeSiteWithUserId:(id)a0;
- (BOOL)_resetRootDirectory;
- (id)_writerAtDataSiteURL:(id)a0 accessAssertion:(id)a1;
- (id)_writerWithDataSite:(id)a0 accessAssertion:(id)a1;
- (id)dataSiteWriterForSet:(id)a0 accessAssertion:(id)a1;
- (id)initWithRootDirectoryURL:(id)a0 settings:(id)a1;
- (id)localDeviceId;
- (BOOL)performMaintenanceActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (BOOL)performPostInstallActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (id)readAccess;
- (id)readAccessForUseCase:(id)a0;

@end
