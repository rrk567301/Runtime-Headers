@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordRep : _EXExtensionRep

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned int)platform;
- (id)localizedName;
- (id)entitlements;
- (id)url;
- (id)UUID;
- (id)attributes;
- (id)extensionPointIdentifier;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)sdkDictionary;
- (id)extensionDictionary;
- (id)containingURL;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
