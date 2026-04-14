@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)UUID;
- (id)containingBundleRecord;
- (id)bundleIdentifier;
- (unsigned int)platform;
- (id)entitlements;
- (id)localizedName;
- (id)url;
- (id)attributes;
- (id)extensionPointIdentifier;
- (unsigned char)userElection;
- (id)extensionDictionary;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)extensionSettingsKey;
- (unsigned char)defaultUserElection;
- (BOOL)setUserElection:(unsigned char)a0 error:(id *)a1;
- (id)containingURL;
- (id)sdkDictionary;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
