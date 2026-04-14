@class HMDNotificationRegistryCharacteristicsRequest, NSArray;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject

@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request;
@property (readonly) NSArray *characteristicThresholds;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequest:(id)a0 characteristicThresholds:(id)a1;

@end
