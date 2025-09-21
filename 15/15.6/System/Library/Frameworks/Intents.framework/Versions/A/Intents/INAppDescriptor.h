@class NSString, NSSet, NSURL, LSApplicationRecord;

@interface INAppDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSSet *counterpartIdentifiers;
@property (readonly, nonatomic) NSSet *supportedIntents;
@property (readonly, nonatomic) NSSet *documentTypes;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (nonatomic) char requiresUserConfirmation;
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (readonly, nonatomic, getter=isInstalled) char installed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithApplicationRecord:(id)a0;
- (id)descriptorWithExtensionBundleIdentifier:(id)a0;
- (id)descriptorWithRecord:(id)a0;
- (id)initWithLocalizedName:(id)a0 bundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 counterpartIdentifiers:(id)a3 teamIdentifier:(id)a4 supportedIntents:(id)a5 bundleURL:(id)a6 documentTypes:(id)a7;

@end
