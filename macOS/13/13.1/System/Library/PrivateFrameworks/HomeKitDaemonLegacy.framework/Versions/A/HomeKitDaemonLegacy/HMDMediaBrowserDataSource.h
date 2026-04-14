@class NSString, HMFSystemInfo, HMFProductInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodMiniPairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) unsigned long long appleMediaAccessoryVariant;

+ (id)shortDescription;

- (id)performOperation:(id)a0;
- (id)createUnassociatedAppleMediaAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 messageDispatcher:(id)a4;
- (id)createUnassociatedHomePodAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 requiredPairingCapabilities:(unsigned long long)a4 minimumPairingSoftware:(id)a5 messageDispatcher:(id)a6;

@end
