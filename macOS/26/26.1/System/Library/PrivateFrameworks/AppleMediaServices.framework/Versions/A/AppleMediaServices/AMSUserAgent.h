@class NSString, AMSMappedBundleInfo, AMSProcessInfo;
@protocol AMSDeviceInfo;

@interface AMSUserAgent : NSObject

@property (readonly) AMSMappedBundleInfo *bundleInfo;
@property (readonly) AMSProcessInfo *processInfo;
@property (readonly) id<AMSDeviceInfo> deviceInfoProvider;
@property (retain) NSString *clientName;
@property (retain) NSString *clientVersion;

+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;
+ (id)userAgentForProcessInfo:(id)a0;

- (id)_macComponentClientInfo;
- (id)_macComponentParenthetical;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;
- (id)compile;
- (id)_macComponentAccountMediaType;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (id)initWithProcessInfo:(id)a0;
- (id)_compiledAMSUserAgentShouldCache:(BOOL *)a0;
- (void).cxx_destruct;
- (id)_initWithProcessInfo:(id)a0 deviceInfoProvider:(id)a1;
- (id)_userAgentSuffix;
- (id)_sharedComponentFrameworkVersion;
- (id)_macComponentWebKitVersionString;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;

@end
