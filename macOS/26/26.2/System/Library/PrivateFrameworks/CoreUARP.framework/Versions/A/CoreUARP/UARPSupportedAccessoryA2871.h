@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2871 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
