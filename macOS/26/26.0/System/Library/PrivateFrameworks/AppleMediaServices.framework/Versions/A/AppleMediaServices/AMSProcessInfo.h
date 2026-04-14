@class NSNumber, NSString, NSObject, NSData, NSURL, AMSMappedBundleInfo;
@protocol OS_dispatch_queue;

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
}

@property (class, readonly) BOOL hasAMSEntitlement;
@property (class, readonly) AMSProcessInfo *currentProcess;
@property (class, readonly, getter=isBuddyRunning) BOOL buddyRunning;
@property (class, retain) NSString *defaultMediaTypeForCurrentProcess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSMappedBundleInfo *mappedBundleInfo;
@property (readonly, getter=isAMSAccountsDaemon) BOOL amsAccountsDaemon;
@property (readonly, getter=isAccountsDaemon) BOOL accountsDaemon;
@property (retain) NSNumber *processIdentifier;
@property (retain) NSString *accountMediaType;
@property (retain) NSData *auditTokenData;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSURL *bundleURL;
@property (retain) NSString *clientVersion;
@property (retain) NSString *executableName;
@property (retain) NSString *localizedName;
@property (retain) NSString *partnerHeader;
@property (retain) NSString *proxyAppBundleID;
@property (copy) NSString *treatmentNamespace;
@property (retain) NSString *userAgentSuffix;

+ (BOOL)boolForEntitlement:(id)a0;
+ (id)stringForEntitlement:(id)a0;
+ (void)_cacheProcessInfo:(id)a0;
+ (BOOL)boolForMachLookupAccess:(id)a0;
+ (id)_bundleRecordForIdentifier:(id)a0;
+ (void)_accessProcessInfoCache:(id /* block */)a0;
+ (id)_bundleForIdentifier:(id)a0 record:(id)a1;
+ (id)valueForEntitlement:(id)a0;
+ (id)arrayForEntitlement:(id)a0;
+ (void)copyPropertiesFrom:(id)a0 to:(id)a1;
+ (BOOL)hasValue:(id)a0 inArrayForEntitlement:(id)a1;
+ (id)_cachedProcessInfoForIdentifier:(id)a0;
+ (id)_currentProcessBundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (id)generateConfigurationFromBag:(id)a0;
- (id)generateConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generateConfigurationFromBagContract:(id)a0;
- (void)_setComputedPropertiesForBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
