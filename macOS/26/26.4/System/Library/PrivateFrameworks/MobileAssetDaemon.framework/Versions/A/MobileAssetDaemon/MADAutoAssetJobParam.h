@class NSError, NSString, MAAutoAssetSelector, MADAutoAssetDescriptor, MANAutoAssetInfoControl, MAAutoAssetProgress, NSDictionary, MADAutoAssetClientRequest;

@interface MADAutoAssetJobParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector;
@property (readonly, retain, nonatomic) NSString *autoAssetJobID;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, nonatomic) BOOL catalogFromLookupCache;
@property (readonly, retain, nonatomic) NSError *finishedError;
@property (readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (readonly, retain, nonatomic) NSString *assetTargetOSVersion;
@property (readonly, retain, nonatomic) NSString *assetTargetBuildVersion;
@property (retain, nonatomic) NSString *assetTargetTrainName;
@property (retain, nonatomic) NSString *assetTargetRestoreVersion;
@property (readonly, retain, nonatomic) MADAutoAssetDescriptor *autoAssetDescriptor;
@property (readonly, retain, nonatomic) MANAutoAssetInfoControl *controlInformation;

- (id)_summary;
- (id)initWithSafeSummary:(id)a0;
- (id)initWithSelector:(id)a0 withControlInformation:(id)a1;
- (id)initWithAssetTargetOSVersion:(id)a0 withAssetTargetBuildVersion:(id)a1 withAssetTargetTrainName:(id)a2 withAssetTargetRestoreVersion:(id)a3 usingCachedAutoAssetCatalog:(id)a4 withControlInformation:(id)a5;
- (id)initForFinishedJobID:(id)a0 withCatalog:(id)a1 whereCatalogFromLookupCache:(BOOL)a2 withError:(id)a3;
- (id)initWithClientRequest:(id)a0 withControlInformation:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 withControlInformation:(id)a1;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withClientRequest:(id)a2 withAutoAssetSelector:(id)a3 withAutoAssetJobID:(id)a4 withAutoAssetCatalog:(id)a5 whereCatalogFromLookupCache:(BOOL)a6 withFinishedError:(id)a7 withDownloadProgress:(id)a8 withAssetTargetOSVersion:(id)a9 withAssetTargetBuildVersion:(id)a10 withAssetTargetTrainName:(id)a11 withAssetTargetRestoreVersion:(id)a12 withAutoAssetDescriptor:(id)a13 withControlInformation:(id)a14;
- (void).cxx_destruct;
- (id)initForFinishedJobID:(id)a0 withError:(id)a1;
- (id)summary;
- (id)description;
- (void)updateSafeSummary;
- (id)initWithControlInformation:(id)a0;
- (id)initForCurrentJobID:(id)a0 withProgress:(id)a1;
- (id)initWithCoder:(id)a0;

@end
