@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *compatibilityVersion;

- (id)description;
- (id)init;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)extensionName;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;

@end
