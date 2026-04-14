@class NSDictionary;

@interface TRIGenericUniqueRequiredAssets : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *cloudKit;
@property (readonly, nonatomic) NSDictionary *mobileAsset;

+ (id)assetsWithCloudKit:(id)a0 mobileAsset:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementMobileAsset:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementCloudKit:(id)a0;
- (id)description;
- (BOOL)isEqualToAssets:(id)a0;
- (id)init;
- (id)initWithCloudKit:(id)a0 mobileAsset:(id)a1;

@end
