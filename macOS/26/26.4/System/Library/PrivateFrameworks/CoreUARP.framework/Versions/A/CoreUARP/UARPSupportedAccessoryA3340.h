@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3340 : UARPSupportedAccessoryMagicKeyboard {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
