@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2871 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
