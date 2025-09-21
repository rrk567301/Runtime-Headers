@class NSString, TRIFullMAAssetId, TRIMAAssetMetadata;

@interface TRIRequiredMAAsset : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) char isOnDemand;
@property (readonly, nonatomic) TRIMAAssetMetadata *metadata;
@property (readonly, nonatomic) TRIFullMAAssetId *fullAssetId;

+ (id)assetWithFactorName:(id)a0 isInstalled:(char)a1 isOnDemand:(char)a2 metadata:(id)a3 fullAssetId:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)copyWithReplacementFullAssetId:(id)a0;
- (char)isEqualToAsset:(id)a0;
- (id)copyWithReplacementIsInstalled:(char)a0;
- (id)initWithFactorName:(id)a0 isInstalled:(char)a1 isOnDemand:(char)a2 metadata:(id)a3 fullAssetId:(id)a4;
- (id)copyWithReplacementIsOnDemand:(char)a0;
- (id)copyWithReplacementMetadata:(id)a0;

@end
