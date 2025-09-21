@class NSString;
@protocol TRIAssetId, TRIFactorPackId;

@interface TRIPurgeableAsset : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) NSString *treatmentId;

+ (id)assetWithFactorName:(id)a0 assetId:(id)a1 filePath:(id)a2 factorPackId:(id)a3 treatmentId:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (char)isEqualToAsset:(id)a0;
- (id)copyWithReplacementFactorPackId:(id)a0;
- (id)copyWithReplacementFilePath:(id)a0;
- (id)initWithFactorName:(id)a0 assetId:(id)a1 filePath:(id)a2 factorPackId:(id)a3 treatmentId:(id)a4;

@end
