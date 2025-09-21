@class NSXPCListenerEndpoint, NSString, NSDictionary, NSArray, NSNumber;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_buyParameters;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char installUniversalVariant;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) char isCompatibilityUpdate;
@property (nonatomic) char isRefresh;
@property (copy, nonatomic) NSNumber *ownerDSID;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (nonatomic) char sendGUID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSArray *appCapabilities;
@property (copy, nonatomic) NSString *bagKey;
@property (nonatomic) char createsJobs;
@property (nonatomic) char isDefaultBrowser;
@property (nonatomic) char displaysOnLockScreen;
@property (copy, nonatomic) NSString *downloadVolume;
@property long long extensionsToEnable;
@property (nonatomic) char forceWatchInstall;
@property (copy, nonatomic) NSArray *gratisIdentifiers;
@property (copy, nonatomic) NSString *installVolume;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) char iOSBinaryMacOSCompatible;
@property (nonatomic) char isDSIDLess;
@property (nonatomic) char isUpdate;
@property (nonatomic) char isBackgroundUpdate;
@property (nonatomic) char isPreorder;
@property (copy) NSDictionary *metricsOverlay;
@property (retain) NSXPCListenerEndpoint *paymentViewServiceListener;
@property (copy, nonatomic) NSString *referrerName;
@property (copy, nonatomic) NSString *referrerURL;
@property (nonatomic) char isRedownload;
@property (nonatomic) long long softwarePlatform;
@property long long purchaseID;
@property (copy, nonatomic) NSArray *requiredCapabilities;
@property (nonatomic) char shouldCancelForInstalledBundleItems;
@property (copy) NSString *preflightURLString;
@property (copy, nonatomic) NSArray *remoteDownloadIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendValue:(id)a0 forBuyParameter:(id)a1;
- (id)firstValueForBuyParameter:(id)a0;

@end
