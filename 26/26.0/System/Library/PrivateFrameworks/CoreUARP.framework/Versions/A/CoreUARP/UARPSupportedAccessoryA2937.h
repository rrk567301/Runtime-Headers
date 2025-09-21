@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2937 : UARPSupportedAccessoryAirTag {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
