@class NSArray, NSString;
@protocol PKCloudStoreCoordinatorDelegate;

@interface PKDownloadRemoteAssetConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *seids;
@property (retain, nonatomic) id<PKCloudStoreCoordinatorDelegate> cloudStoreCoordinatorDelegate;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSString *suffix;
@property (nonatomic) BOOL ignoreRequiredAssetDownloadFailures;

+ (id)configurationWithSEIDs:(id)a0;
+ (id)configurationWithCloudStoreDelegate:(id)a0;
+ (id)configurationWithCloudStoreDelegate:(id)a0 seids:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDownloadRemoteAssetConfiguration:(id)a0;

@end
