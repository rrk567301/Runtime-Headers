@class NSUUID;

@interface HMDNotificationRegistryActionSetRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *actionSetUUID;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithEnable:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 actionSetUUID:(id)a3;

@end
