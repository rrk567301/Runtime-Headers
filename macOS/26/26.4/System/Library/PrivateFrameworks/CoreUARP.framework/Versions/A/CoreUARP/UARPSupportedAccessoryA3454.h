@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3454 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
