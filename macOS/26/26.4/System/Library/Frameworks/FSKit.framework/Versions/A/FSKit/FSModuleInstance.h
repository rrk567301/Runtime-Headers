@class FSModuleIdentity, NSString, NSDictionary, NSURL, LSApplicationExtensionRecord, NSUUID;

@interface FSModuleInstance : NSObject

@property (readonly) NSDictionary *entitlements;
@property (readonly, nonatomic) FSModuleIdentity *identity;
@property (readonly, nonatomic) LSApplicationExtensionRecord *record;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingURL;
@property (readonly) NSUUID *UUID;
@property (readonly) NSURL *executableURL;
@property (readonly) NSDictionary *sdkDictionary;
@property (readonly) NSDictionary *extensionDictionary;
@property (readonly) unsigned int platform;
@property (readonly) NSString *localizedName;
@property (readonly) NSDictionary *attributes;

+ (id)instanceWithExtensionIdentity:(id)a0;

- (unsigned int)platform;
- (id)bundleVersion;
- (BOOL)isEqual:(id)a0;
- (id)attributes;
- (void).cxx_destruct;
- (id)initWithExtensionIdentity:(id)a0;
- (id)extensionPointIdentifier;
- (id)entitlements;
- (id)description;
- (id)bundleIdentifier;
- (id)url;
- (id)localizedName;
- (id)UUID;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)extensionDictionary;
- (id)containingURL;
- (id)sdkDictionary;
- (id)initWithExtensionRecord:(id)a0 enabled:(BOOL)a1;

@end
