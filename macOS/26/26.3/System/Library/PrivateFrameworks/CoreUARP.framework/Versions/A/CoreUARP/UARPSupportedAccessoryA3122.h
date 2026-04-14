@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3122 : UARPSupportedAccessoryAirPodsCase {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
