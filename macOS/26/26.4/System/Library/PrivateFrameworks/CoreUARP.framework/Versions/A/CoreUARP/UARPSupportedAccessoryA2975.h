@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2975 : UARPSupportedAccessoryMagicKeyboard {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
