@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2699 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;
+ (id)mobileAssetAppleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
