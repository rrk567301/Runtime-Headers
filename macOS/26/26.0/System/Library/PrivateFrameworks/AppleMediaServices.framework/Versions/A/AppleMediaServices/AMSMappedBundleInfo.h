@class NSString;

@interface AMSMappedBundleInfo : NSObject

@property (class, readonly) AMSMappedBundleInfo *currentBundleInfo;

@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *clientName;
@property (retain) NSString *clientVersion;
@property (retain) NSString *scheme;
@property (retain) NSString *secureScheme;
@property (retain) NSString *accountMediaType;
@property (retain) NSString *proxyAppBundleID;
@property (retain) NSString *userAgentSuffix;

+ (id)_clientNameFromProcessInfo:(id)a0;
+ (id)bundleInfoForProcessInfo:(id)a0;
+ (id)_clientVersionFromProcessInfo:(id)a0 clientName:(id)a1;
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:(id)a0;
+ (BOOL)bundleIdentifierIsGames:(id)a0;
+ (id)accountMediaTypeInfoForProcessInfo:(id)a0;
+ (id)_accountMediaTypeForClientName:(id)a0 bundleID:(id)a1;

- (id)_initWithClient:(long long)a0 processInfo:(id)a1;
- (void).cxx_destruct;

@end
