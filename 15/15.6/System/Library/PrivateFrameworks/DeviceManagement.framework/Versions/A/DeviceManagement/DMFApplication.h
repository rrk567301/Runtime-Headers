@class DMFApplicationInstallProgress, NSString, NSDictionary, NSData, NSNumber;

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *shortVersionString;
@property (readonly, copy, nonatomic) NSString *applicationType;
@property (readonly, copy, nonatomic) NSNumber *adamID;
@property (readonly, copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, copy, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (readonly, copy, nonatomic) NSNumber *staticUsage;
@property (readonly, copy, nonatomic) NSNumber *dynamicUsage;
@property (readonly, copy, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, copy, nonatomic) NSString *unusedRedemptionCode;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (readonly, copy, nonatomic) NSDictionary *feedback;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long managementFlags;
@property (readonly, nonatomic) char isManaged;
@property (readonly, nonatomic) char isValidated;
@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) char isPlaceholder;
@property (readonly, nonatomic) char isAppUpdate;
@property (readonly, nonatomic) char isBetaApp;
@property (readonly, nonatomic) char isRemoveable;
@property (readonly, nonatomic) char isTapToPayScreenLock;
@property (readonly, nonatomic) char fileSharingEnabled;
@property (readonly, nonatomic) DMFApplicationInstallProgress *progress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationIdentifier:(id)a0 bundleIdentifier:(id)a1 name:(id)a2 iconData:(id)a3 bundleVersion:(id)a4 shortVersionString:(id)a5 applicationType:(id)a6 adamID:(id)a7 externalVersionIdentifier:(id)a8 betaExternalVersionIdentifier:(id)a9 staticUsage:(id)a10 dynamicUsage:(id)a11 onDemandResourcesUsage:(id)a12 unusedRedemptionCode:(id)a13 attributes:(id)a14 configuration:(id)a15 feedback:(id)a16 state:(unsigned long long)a17 managementFlags:(unsigned long long)a18 isManaged:(char)a19 isValidated:(char)a20 isInstalled:(char)a21 isPlaceholder:(char)a22 isAppUpdate:(char)a23 isBetaApp:(char)a24 isRemoveable:(char)a25 fileSharingEnabled:(char)a26 progress:(id)a27;
- (id)initWithBundleIdentifier:(id)a0 name:(id)a1 iconData:(id)a2 applicationType:(id)a3 adamID:(id)a4 externalVersionNumber:(id)a5 betaExternalVersionIdentifier:(id)a6 isInstalled:(char)a7 isPlaceholder:(char)a8 isAppUpdate:(char)a9 isBetaApp:(char)a10 isRemoveable:(char)a11 fileSharingEnabled:(char)a12 progress:(id)a13;

@end
