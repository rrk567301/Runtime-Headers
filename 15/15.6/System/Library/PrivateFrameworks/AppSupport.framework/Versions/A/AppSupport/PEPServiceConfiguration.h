@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    char _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_postNotification;
- (void)_updateDefaults:(id)a0;
- (char)registerNetworkDefaultsForAppID:(id)a0;
- (char)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(char)a1;

@end
