@class AMSProcessInfo, NSString, AMSCoreOptionsBox, AMSMappedBundleInfo;

@interface AMSUserAgent : NSObject

@property (readonly) AMSMappedBundleInfo *bundleInfo;
@property (readonly) AMSProcessInfo *processInfo;
@property (readonly) AMSCoreOptionsBox *optionsBox;
@property (retain) NSString *clientName;
@property (retain) NSString *clientVersion;

+ (id)userAgentForProcessInfo:(id)a0;
+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithProcessInfo:(id)a0;
- (id)compile;
- (id)_userAgentSuffix;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_macComponentAccountMediaType;
- (id)_macComponentClientInfo;
- (id)_macComponentParenthetical;
- (id)_macComponentWebKitVersionString;
- (id)_sharedComponentFrameworkVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;

@end
