@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2463 : UARPSupportedAccessoryMagSafe {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
