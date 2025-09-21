@class NSString, NSArray, NSURL, NSUUID, NSNumber;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier;
@property (retain, nonatomic) NSURL *topLevelBundleURL;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *extensionPointVersion;
@property (nonatomic) char readonly;
@property (nonatomic) char enabledByDefault;
@property (nonatomic) char supportsEnumeration;
@property (nonatomic) char defaultDomainVisible;
@property (nonatomic) char shouldHideExtensionName;
@property (nonatomic) char canToggleDomainVisibility;
@property (nonatomic) char isAvailableSystemWide;
@property (nonatomic) char usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic) char supportsUnzippedPackages;
@property (nonatomic) char hasExplicitExtensionStorageURLs;
@property (nonatomic) char supportsPickingFolders;
@property (nonatomic) char wantsFlattenedPackages;
@property (nonatomic) char allowsUserControlledEviction;
@property (nonatomic) char allowsSystemDeleteAlerts;
@property (nonatomic) char allowsContextualMenuDownloadEntry;
@property (nonatomic) char appliesChangesAtomically;
@property (retain, nonatomic) NSNumber *downloadPipelineDepth;
@property (retain, nonatomic) NSNumber *uploadPipelineDepth;
@property (retain, nonatomic) NSNumber *metadataOnlyUploadPipelineDepth;
@property (nonatomic) char owningApplicationIsManaged;
@property (nonatomic) char disallowedByMDM;
@property (retain, nonatomic) NSString *purposeIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifierForPushes;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (retain, nonatomic) NSArray *supportedFileTypes;
@property (retain, nonatomic) NSArray *supportedSearchFilters;
@property (retain, nonatomic) NSArray *extensionStorageURLs;
@property (retain, nonatomic) NSString *documentGroupName;
@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (retain, nonatomic) NSUUID *extensionUUID;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) char managedPersona;
@property (nonatomic) char wantsBundleBitOnlyPackageDetection;
@property (nonatomic) char allowsExternalVolumes;

+ (id)personaFromExtensionRecord:(id)a0 managedPersona:(char *)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionRecord:(id)a0;
- (char)isPersonaLegit;

@end
