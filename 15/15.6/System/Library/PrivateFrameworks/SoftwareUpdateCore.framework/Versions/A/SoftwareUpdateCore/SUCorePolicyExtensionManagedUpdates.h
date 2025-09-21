@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supervised;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) char MDMUseDelayPeriod;
@property (nonatomic) long long delayPeriodSecs;
@property (nonatomic) unsigned long long mdmSoftwareUpdatePath;

+ (id)nameForMDMSoftwareUpdatePath:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)extensionName;
- (id)requestedProductMarketingVersion;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (long long)delayPeriodDays;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendMSUApplyOptions:(id)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (char)isRequestedPMVSupervisedPolicy;
- (char)isSupervisedPolicy;
- (id)mdmPathName;

@end
