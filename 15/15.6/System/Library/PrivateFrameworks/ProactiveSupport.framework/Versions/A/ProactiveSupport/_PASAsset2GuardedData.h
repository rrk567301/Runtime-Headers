@class NSString, MAAsset, NSMutableDictionary;

@interface _PASAsset2GuardedData : NSObject {
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    MAAsset *_bestAvailableAsset;
    char _purgeObsoleteInstalledAssets;
    NSMutableDictionary *_overrides;
}

- (void).cxx_destruct;

@end
