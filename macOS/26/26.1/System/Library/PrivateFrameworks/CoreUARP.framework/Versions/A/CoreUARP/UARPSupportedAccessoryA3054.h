@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3054 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)mobileAssetAppleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
