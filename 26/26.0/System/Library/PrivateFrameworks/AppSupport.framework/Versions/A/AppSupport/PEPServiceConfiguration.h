@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)_updateDefaults:(id)a0;
- (id)init;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;
- (BOOL)registerNetworkDefaultsForAppID:(id)a0;
- (void)_postNotification;

@end
