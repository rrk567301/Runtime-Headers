@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2617 : UARPSupportedAccessoryAirPodsCase {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
