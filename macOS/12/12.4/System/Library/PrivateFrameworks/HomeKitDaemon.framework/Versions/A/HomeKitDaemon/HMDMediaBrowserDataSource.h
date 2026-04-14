@class NSString, HMFSystemInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodPairing;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMDDevice *currentDevice;

+ (id)shortDescription;

@end
