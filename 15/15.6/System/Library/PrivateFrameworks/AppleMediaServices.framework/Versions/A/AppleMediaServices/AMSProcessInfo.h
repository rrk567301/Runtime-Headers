@class NSNumber, NSString, NSObject, NSData, NSURL, AMSMappedBundleInfo;
@protocol OS_dispatch_queue;

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
}

@property (class, readonly) char hasAMSEntitlement;
@property (class, readonly) AMSProcessInfo *currentProcess;
@property (class, readonly, getter=isBuddyRunning) char buddyRunning;
@property (class, retain) NSString *defaultMediaTypeForCurrentProcess;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) AMSMappedBundleInfo *mappedBundleInfo;
@property (readonly, getter=isAccountsDaemon) char accountsDaemon;
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

+ (id)valueForEntitlement:(id)a0;
+ (char)hasValue:(id)a0 inArrayForEntitlement:(id)a1;
+ (id)_currentProcessBundleIdentifier;
+ (void)_accessProcessInfoCache:(id /* block */)a0;
+ (id)_bundleForIdentifier:(id)a0 record:(id)a1;
+ (id)_bundleRecordForIdentifier:(id)a0;
+ (void)_cacheProcessInfo:(id)a0;
+ (id)_cachedProcessInfoForIdentifier:(id)a0;
+ (id)arrayForEntitlement:(id)a0;
+ (char)boolForEntitlement:(id)a0;
+ (char)boolForMachLookupAccess:(id)a0;
+ (void)copyPropertiesFrom:(id)a0 to:(id)a1;
+ (id)stringForEntitlement:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_setComputedPropertiesForBundleIdentifier:(id)a0;
- (id)generateConfiguration;
- (id)generateConfigurationFromBag:(id)a0;
- (id)generateConfigurationFromBagContract:(id)a0;

@end
