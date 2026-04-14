@class NSString, HMFSystemInfo, HMFProductInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodMiniPairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) BOOL requiresB620Pairing;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) unsigned long long appleMediaAccessoryVariant;

+ (id)shortDescription;

- (id)performOperation:(id)a0;
- (id)createUnassociatedAppleMediaAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 rawAccessoryCapabilities:(id)a4 rawResidentCapabilities:(id)a5 messageDispatcher:(id)a6;
- (id)createUnassociatedHomePodAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 requiredPairingCapabilities:(unsigned long long)a4 minimumPairingSoftware:(id)a5 rawAccessoryCapabilities:(id)a6 rawResidentCapabilities:(id)a7 messageDispatcher:(id)a8;

@end
