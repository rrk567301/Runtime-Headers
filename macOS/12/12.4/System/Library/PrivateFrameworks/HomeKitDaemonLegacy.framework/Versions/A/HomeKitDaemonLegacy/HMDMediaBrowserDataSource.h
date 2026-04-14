@class NSString, HMFSystemInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodPairing;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMDDevice *currentDevice;

+ (id)shortDescription;

- (id)createUnassociatedAppleMediaAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 messageDispatcher:(id)a4;
- (id)createUnassociatedHomePodAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 messageDispatcher:(id)a4;

@end
