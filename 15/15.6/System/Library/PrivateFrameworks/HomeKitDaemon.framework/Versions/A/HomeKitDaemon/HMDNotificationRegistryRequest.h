@class NSString, HMDUser;

@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly) char enable;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) HMDUser *user;
@property long long retryCount;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(char)a0 user:(id)a1 deviceIdsDestination:(id)a2;

@end
