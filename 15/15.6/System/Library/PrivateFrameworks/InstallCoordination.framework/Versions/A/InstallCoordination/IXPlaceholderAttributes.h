@class NSString, NSDictionary, NSArray;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char launchProhibited;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersionString;
@property (copy, nonatomic) NSDictionary *extensionDictionary;
@property (copy, nonatomic) NSDictionary *exAppExtensionAttributes;
@property (copy, nonatomic) NSString *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredDeviceCapabilities;
@property (copy, nonatomic) NSArray *sbAppTags;
@property (copy, nonatomic) NSArray *lsCounterpartIdentifiers;
@property (copy, nonatomic) NSString *sbIconMasqueradeIdentifier;
@property (copy, nonatomic) NSString *companionBundleIdentifierForWatchApp;
@property (nonatomic) char watchOnlyApp;
@property (nonatomic) char runsIndependentlyOfCompanionApp;
@property (nonatomic) char arcadeApp;
@property (copy, nonatomic) NSDictionary *webKitPushBundleMetadata;
@property (nonatomic) char lsRequiresPostProcessing;
@property (copy, nonatomic) NSArray *uiDeviceFamily;
@property (copy, nonatomic) NSString *accentColorName;
@property (copy, nonatomic) NSDictionary *uiLaunchScreen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)infoPlistContent;
- (id)_plistKeys;
- (id)initWithInfoPlistDictionary:(id)a0;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle { } *)a0 error:(id *)a1;
- (id)initWithInfoPlistFromBundleURL:(id)a0 error:(id *)a1;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)a0;

@end
