@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2699 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)mobileAssetAppleModelNumber;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (void).cxx_destruct;
- (id)init;

@end
