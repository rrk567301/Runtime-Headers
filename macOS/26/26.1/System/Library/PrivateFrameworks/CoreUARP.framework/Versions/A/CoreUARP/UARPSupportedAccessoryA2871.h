@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2871 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
