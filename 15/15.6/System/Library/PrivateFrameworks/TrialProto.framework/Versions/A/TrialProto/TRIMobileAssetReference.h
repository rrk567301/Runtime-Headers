@class NSString;

@interface TRIMobileAssetReference : TRIPBMessage

@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) char hasAssetType;
@property (copy, nonatomic) NSString *assetSpecifier;
@property (nonatomic) char hasAssetSpecifier;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) char hasAssetVersion;
@property (nonatomic) char isOnDemand;
@property (nonatomic) char hasIsOnDemand;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) unsigned long long size;
@property (nonatomic) char hasSize;
@property (nonatomic) char isFileFactor;
@property (nonatomic) char hasIsFileFactor;

+ (id)descriptor;

@end
