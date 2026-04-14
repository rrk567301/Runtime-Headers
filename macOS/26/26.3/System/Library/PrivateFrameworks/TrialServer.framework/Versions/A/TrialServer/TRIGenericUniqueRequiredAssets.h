@class NSDictionary;

@interface TRIGenericUniqueRequiredAssets : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *cloudKit;
@property (readonly, nonatomic) NSDictionary *mobileAsset;

+ (id)assetsWithCloudKit:(id)a0 mobileAsset:(id)a1;

- (id)description;
- (id)init;
- (id)copyWithReplacementCloudKit:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementMobileAsset:(id)a0;
- (id)initWithCloudKit:(id)a0 mobileAsset:(id)a1;
- (BOOL)isEqualToAssets:(id)a0;

@end
