@class UAFAssetUtilities;

@interface SRUIFAssetUtilities : NSObject {
    UAFAssetUtilities *_assetUtilities;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)downloadAssets;

@end
