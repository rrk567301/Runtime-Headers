@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3057 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)mobileAssetAppleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
