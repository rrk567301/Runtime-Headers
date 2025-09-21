@class NSString;

@interface TRIAsset : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) char hasAssetId;
@property (nonatomic) unsigned int cloudKitIndex;
@property (nonatomic) char hasCloudKitIndex;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) char signed_p;
@property (nonatomic) char hasSigned_p;
@property (nonatomic) unsigned long long size;
@property (nonatomic) char hasSize;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) char hasCloudKitContainer;

+ (id)descriptor;

@end
