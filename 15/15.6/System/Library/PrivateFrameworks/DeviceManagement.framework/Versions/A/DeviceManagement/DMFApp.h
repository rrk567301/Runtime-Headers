@class NSString, NSArray, NSDictionary, DMFAppManagementInformation, NSNumber;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *distributorIdentifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *staticUsage;
@property (copy, nonatomic) NSNumber *dynamicUsage;
@property (copy, nonatomic) NSNumber *onDemandResourcesUsage;
@property (copy, nonatomic) NSNumber *sharedUsage;
@property (nonatomic) unsigned long long installationState;
@property (nonatomic) char isPlaceholder;
@property (nonatomic) char isRestricted;
@property (nonatomic) char isBlocked;
@property (nonatomic) char isUserBasedVPP;
@property (nonatomic) char isDeviceBasedVPP;
@property (nonatomic) char isLicenseExpired;
@property (nonatomic) char isLicenseRevoked;
@property (nonatomic) char isUPP;
@property (nonatomic) char isValidated;
@property (nonatomic) char isAppClip;
@property (nonatomic) char isAppStoreVendable;
@property (nonatomic) char isBetaApp;
@property (nonatomic) char isAdHocCodeSigned;
@property (nonatomic) char hasUpdateAvailable;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSString *cellularSliceUUIDString;
@property (copy, nonatomic) NSString *contentFilterUUIDString;
@property (copy, nonatomic) NSString *DNSProxyUUIDString;
@property (copy, nonatomic) NSString *relayUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSNumber *tapToPayScreenLock;
@property (copy, nonatomic) NSNumber *allowUserToHide;
@property (copy, nonatomic) NSNumber *allowUserToLock;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *feedback;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) DMFAppManagementInformation *managementInformation;

+ (id)descriptionForBool:(id)a0 showWhenUnassigned:(char)a1 valueWhenUnassigned:(char)a2;
+ (id)stringForInstallationState:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringForType:(unsigned long long)a0;

@end
