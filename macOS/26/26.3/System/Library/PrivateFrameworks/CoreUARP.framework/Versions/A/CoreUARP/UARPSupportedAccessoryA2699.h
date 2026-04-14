@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2699 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)mobileAssetAppleModelNumber;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
