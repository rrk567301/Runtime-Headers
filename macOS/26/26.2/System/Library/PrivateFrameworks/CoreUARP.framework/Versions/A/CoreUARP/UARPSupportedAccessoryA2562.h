@class UARPAccessoryHardwareHDS;

@interface UARPSupportedAccessoryA2562 : UARPSupportedAccessory {
    UARPAccessoryHardwareHDS *hwID;
}

+ (id)appleModelNumber;
+ (id)modelUUID;

- (void).cxx_destruct;
- (id)init;

@end
