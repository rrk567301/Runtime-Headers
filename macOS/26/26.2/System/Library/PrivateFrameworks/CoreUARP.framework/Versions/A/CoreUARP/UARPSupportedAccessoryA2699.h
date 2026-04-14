@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2699 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)mobileAssetAppleModelNumber;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
