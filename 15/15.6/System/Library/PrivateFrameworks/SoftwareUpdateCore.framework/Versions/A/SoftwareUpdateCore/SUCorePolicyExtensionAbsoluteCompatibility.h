@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *compatibilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
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
