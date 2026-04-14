@class NSString;
@protocol TRIAssetId;

@interface TRIAssetIdFactorName : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSString *factorName;

+ (id)nameWithAssetId:(id)a0 factorName:(id)a1;

- (id)copyWithReplacementAssetId:(id)a0;
- (BOOL)isEqualToName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetId:(id)a0 factorName:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)description;

@end
