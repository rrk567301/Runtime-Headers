@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)_postNotification;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;
- (void)_updateDefaults:(id)a0;
- (id)init;
- (BOOL)registerNetworkDefaultsForAppID:(id)a0;
- (void)dealloc;

@end
