@class NSError, NSString, MAAutoAssetSelector, MADAutoAssetDescriptor, MAAutoAssetProgress, NSDictionary, MADAutoAssetClientRequest, MAAutoAssetInfoControl;

@interface MADAutoAssetJobParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector;
@property (readonly, retain, nonatomic) NSString *autoAssetJobID;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, retain, nonatomic) NSError *finishedError;
@property (readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (readonly, retain, nonatomic) NSString *assetTargetOSVersion;
@property (readonly, retain, nonatomic) NSString *assetTargetBuildVersion;
@property (readonly, retain, nonatomic) MADAutoAssetDescriptor *autoAssetDescriptor;
@property (readonly, retain, nonatomic) MAAutoAssetInfoControl *controlInformation;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_summary;
- (id)summary;
- (id)initWithSafeSummary:(id)a0;
- (id)initForFinishedJobID:(id)a0 withError:(id)a1;
- (id)initForFinishedJobID:(id)a0 withCatalog:(id)a1 withError:(id)a2;
- (id)initForCurrentJobID:(id)a0 withProgress:(id)a1;
- (void)updateSafeSummary;
- (id)initWithControlInformation:(id)a0;
- (id)initWithClientRequest:(id)a0 withControlInformation:(id)a1;
- (id)initWithSelector:(id)a0 withControlInformation:(id)a1;
- (id)initWithAssetTargetOSVersion:(id)a0 withAssetTargetBuildVersion:(id)a1 withControlInformation:(id)a2;
- (id)initWithDescriptor:(id)a0 withControlInformation:(id)a1;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withClientRequest:(id)a2 withAutoAssetSelector:(id)a3 withAutoAssetJobID:(id)a4 withAutoAssetCatalog:(id)a5 withFinishedError:(id)a6 withDownloadProgress:(id)a7 withAssetTargetOSVersion:(id)a8 withAssetTargetBuildVersion:(id)a9 withAutoAssetDescriptor:(id)a10 withControlInformation:(id)a11;

@end
