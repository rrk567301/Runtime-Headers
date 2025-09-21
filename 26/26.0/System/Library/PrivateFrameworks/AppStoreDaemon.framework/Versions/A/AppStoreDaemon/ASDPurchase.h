@class NSXPCListenerEndpoint, NSString, NSDictionary, NSArray, NSNumber;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_buyParameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *packageOverride;
@property (nonatomic) BOOL installUniversalVariant;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) BOOL isCompatibilityUpdate;
@property (nonatomic) BOOL isRefresh;
@property (copy, nonatomic) NSNumber *ownerDSID;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (nonatomic) BOOL sendGUID;
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
@property (nonatomic) BOOL createsJobs;
@property (nonatomic) BOOL isDefaultBrowser;
@property (nonatomic) BOOL displaysOnLockScreen;
@property (copy, nonatomic) NSString *downloadVolume;
@property long long extensionsToEnable;
@property (nonatomic) BOOL forceWatchInstall;
@property (nonatomic) long long forceAskToBuyReason;
@property (copy, nonatomic) NSArray *gratisIdentifiers;
@property (copy, nonatomic) NSString *installVolume;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) BOOL iOSBinaryMacOSCompatible;
@property (nonatomic) BOOL isDSIDLess;
@property (nonatomic) BOOL isUpdate;
@property (nonatomic) BOOL isBackgroundUpdate;
@property (nonatomic) BOOL isPreorder;
@property (copy) NSDictionary *metricsOverlay;
@property (copy) NSDictionary *performanceMetricsOverlay;
@property (nonatomic) long long packaging;
@property (retain) NSXPCListenerEndpoint *paymentViewServiceListener;
@property (copy, nonatomic) NSString *referrerName;
@property (copy, nonatomic) NSString *referrerURL;
@property (nonatomic) BOOL isRedownload;
@property (nonatomic) long long softwarePlatform;
@property long long purchaseID;
@property (copy, nonatomic) NSArray *requiredCapabilities;
@property (nonatomic) BOOL shouldAskForRatingException;
@property (nonatomic) unsigned long long ageRatingValue;
@property (nonatomic) BOOL shouldCancelForInstalledBundleItems;
@property (copy) NSString *preflightURLString;
@property (copy, nonatomic) NSArray *remoteDownloadIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)appendValue:(id)a0 forBuyParameter:(id)a1;
- (id)firstValueForBuyParameter:(id)a0;

@end
