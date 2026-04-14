@class NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    LSBundleRecord *_containingBundleRecord;
    NSUUID *_UUID;
    NSString *_localizedName;
    NSURL *_url;
    NSURL *_containingURL;
    NSDictionary *_sdkDictionary;
    NSDictionary *_extensionDictionary;
    NSDictionary *_attributes;
    NSDictionary *_entitlements;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)extensionDictionary;
- (id)applicationExtensionRecord;
- (id)containingURL;
- (unsigned char)defaultUserElection;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)sdkDictionary;

@end
