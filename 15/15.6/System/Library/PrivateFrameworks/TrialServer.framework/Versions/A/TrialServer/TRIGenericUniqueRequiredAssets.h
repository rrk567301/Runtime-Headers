@class NSDictionary;

@interface TRIGenericUniqueRequiredAssets : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *cloudKit;
@property (readonly, nonatomic) NSDictionary *mobileAsset;

+ (id)assetsWithCloudKit:(id)a0 mobileAsset:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementMobileAsset:(id)a0;
- (id)copyWithReplacementCloudKit:(id)a0;
- (id)initWithCloudKit:(id)a0 mobileAsset:(id)a1;
- (char)isEqualToAssets:(id)a0;

@end
