@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2513 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
