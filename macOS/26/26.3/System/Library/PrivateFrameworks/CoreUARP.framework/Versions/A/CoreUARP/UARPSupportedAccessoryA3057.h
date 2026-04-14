@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3057 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)mobileAssetAppleModelNumber;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
