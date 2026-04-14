@class NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
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
- (unsigned char)defaultUserElection;
- (id)containingURL;
- (id)sdkDictionary;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
