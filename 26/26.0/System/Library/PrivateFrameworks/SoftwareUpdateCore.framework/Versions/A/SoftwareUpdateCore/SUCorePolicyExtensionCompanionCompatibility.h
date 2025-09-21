@class NSString, NSDictionary, SUCoreLog, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePolicyExtensionCompanionCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minCompatibility;
@property (retain, nonatomic) NSNumber *maxCompatibility;
@property (nonatomic) BOOL allowSameVersionUpdates;
@property (nonatomic) BOOL preferFullReplacement;
@property (retain, nonatomic) NSDictionary *suAssetDownloadOptions;
@property (readonly, nonatomic) BOOL assetOutOfCompatibilityRange;
@property (retain, nonatomic) NSString *buildVersion;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *operationsQueue;
@property (readonly, retain, nonatomic) SUCoreLog *logger;

+ (id)sharedInstance;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)extensionName;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendMSUApplyOptions:(id)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (void)setCompatibilityVersionRange:(id)a0 maxCompatibilityVersion:(id)a1;

@end
