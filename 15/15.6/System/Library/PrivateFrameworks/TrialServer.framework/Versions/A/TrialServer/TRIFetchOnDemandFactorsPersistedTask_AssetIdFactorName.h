@class NSString;

@interface TRIFetchOnDemandFactorsPersistedTask_AssetIdFactorName : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) char hasAssetId;
@property (copy, nonatomic) NSString *factorName;
@property (nonatomic) char hasFactorName;

+ (id)descriptor;

@end
