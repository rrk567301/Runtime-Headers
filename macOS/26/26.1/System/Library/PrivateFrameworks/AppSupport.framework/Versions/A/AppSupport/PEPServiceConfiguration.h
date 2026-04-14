@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)_updateDefaults:(id)a0;
- (void)dealloc;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;
- (BOOL)registerNetworkDefaultsForAppID:(id)a0;
- (void)_postNotification;
- (id)init;

@end
