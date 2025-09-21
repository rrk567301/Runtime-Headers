@class NSArray, NSString;
@protocol PKCloudStoreCoordinatorDelegate;

@interface PKDownloadRemoteAssetConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *seids;
@property (retain, nonatomic) id<PKCloudStoreCoordinatorDelegate> cloudStoreCoordinatorDelegate;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSString *suffix;
@property (nonatomic) BOOL ignoreRequiredAssetDownloadFailures;
@property (nonatomic) BOOL includeEncryptedAssets;

+ (id)cardArtConfigurationWithSEIDs:(id)a0;
+ (id)configurationWithCloudStoreDelegate:(id)a0;
+ (id)configurationWithCloudStoreDelegate:(id)a0 seids:(id)a1;
+ (id)configurationWithSEIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDownloadRemoteAssetConfiguration:(id)a0;

@end
