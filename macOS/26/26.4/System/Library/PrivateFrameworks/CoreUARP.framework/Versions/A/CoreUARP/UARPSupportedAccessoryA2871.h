@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2871 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
