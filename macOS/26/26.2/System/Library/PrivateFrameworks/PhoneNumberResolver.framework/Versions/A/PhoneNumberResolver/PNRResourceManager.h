@class NSMutableSet, NSDate, NSObject, NSCache;
@protocol OS_os_log;

@interface PNRResourceManager : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileDataCache;
    NSCache *_maCache;
    unsigned long long _stateCaptureHandle;
    NSObject<OS_os_log> *_log;
    NSMutableSet *_downloadsInflight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downloadsInflightLock;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_URLForInstalledResourceOfType:(id)a0 logId:(id)a1 resultBlock:(id /* block */)a2;
- (id)_assetQueryForPNRResource:(id)a0;
- (void)_bestStringForInCountryPhoneNumber:(id)a0 slice:(id)a1 countryOfDevice:(id)a2 countryTrieData:(id)a3 countryStrings:(id)a4 logId:(id)a5 resultBlock:(id /* block */)a6;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (id)_getDataFrom:(id)a0 zeroCacheCost:(BOOL)a1 logId:(id)a2;
- (id)_lastCatalogLoadTime;
- (id)_lookupString:(id)a0 inTrieMemory:(void *)a1 value:(unsigned int *)a2;
- (void)_openLatestAssetWithBasename:(id)a0 maType:(id)a1 logId:(id)a2 resultBlock:(id /* block */)a3;
- (void)_setLastCatalogLoadTime:(id)a0;
- (void)_updateCatalog;
- (void)_updateCatalogAfterDelay:(double)a0;
- (void)catalogLoadThen:(id /* block */)a0;
- (void)lookupAssetSliceForPhoneNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupISOCountryCodeFromNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupStringForPhoneNumber:(id)a0 inSlice:(id)a1 countryCodeOfDevice:(id)a2 logId:(id)a3 withResult:(id /* block */)a4;
- (void)openAssetSliceFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)openIntlFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)openPNRFilesForSlice:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;

@end
