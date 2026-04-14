@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3059 : UARPSupportedAccessoryAirPodsCase {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
