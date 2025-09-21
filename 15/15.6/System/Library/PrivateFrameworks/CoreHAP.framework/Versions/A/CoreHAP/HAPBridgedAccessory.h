@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>

@property (weak, nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)shortDescription;
- (char)isPrimary;
- (void)setReachable:(char)a0;
- (char)mergeObject:(id)a0;
- (char)shouldMergeObject:(id)a0;
- (char)__parseServices;
- (char)__isReachable;
- (char)__parseBridgeService:(id)a0;
- (void)accessoryServer:(id)a0 didUpdateValueForCharacteristic:(id)a1;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)a0;
- (id)initWithServer:(id)a0 instanceID:(id)a1 parsedServices:(id)a2;
- (char)mergeWithAccessory:(id)a0;

@end
