@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)url;
- (id)UUID;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)containingBundleRecord;
- (id)entitlements;
- (id)localizedName;
- (unsigned int)platform;
- (id)attributes;
- (id)extensionPointIdentifier;
- (unsigned char)userElection;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)extensionDictionary;
- (id)applicationExtensionRecord;
- (id)containingURL;
- (unsigned char)defaultUserElection;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)extensionSettingsKey;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)sdkDictionary;
- (BOOL)setUserElection:(unsigned char)a0 error:(id *)a1;

@end
