@class HAP2AccessoryServerDiscoveryBonjour, NSString, HMFSystemInfo, HMFProductInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) char isAppleMediaAccessory;
@property (readonly) char requiresHomePodMiniPairing;
@property (readonly) char requiresHH2Pairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) char requiresHomePod2ndGenPairing;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) unsigned long long appleMediaAccessoryVariant;
@property (readonly) HAP2AccessoryServerDiscoveryBonjour *airPlayBonjourBrowser;

+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (id)performOperation:(id)a0;

@end
