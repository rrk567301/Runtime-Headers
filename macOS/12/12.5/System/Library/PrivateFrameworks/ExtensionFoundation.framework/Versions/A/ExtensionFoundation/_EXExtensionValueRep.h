@class NSString, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueRep : _EXExtensionRep {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
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
- (id)bundleIdentifier;
- (unsigned int)platform;
- (id)localizedName;
- (id)entitlements;
- (id)url;
- (id)UUID;
- (id)attributes;
- (id)extensionPointIdentifier;
- (id)sdkDictionary;
- (id)extensionDictionary;
- (id)containingURL;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;

@end
