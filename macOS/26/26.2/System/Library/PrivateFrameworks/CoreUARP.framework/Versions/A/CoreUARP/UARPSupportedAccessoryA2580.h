@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2580 : UARPSupportedAccessoryMagSafe {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
