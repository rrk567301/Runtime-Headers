@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3048 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (void).cxx_destruct;
- (id)init;

@end
