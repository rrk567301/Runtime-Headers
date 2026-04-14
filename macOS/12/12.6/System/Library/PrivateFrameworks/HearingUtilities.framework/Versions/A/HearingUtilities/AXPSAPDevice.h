@interface AXPSAPDevice : AXHearingAidDevice

+ (id)characteristicsUUIDs;

- (unsigned long long)deviceType;
- (id)serviceUUID;
- (id)persistentRepresentation;
- (unsigned long long)requiredProperties;

@end
