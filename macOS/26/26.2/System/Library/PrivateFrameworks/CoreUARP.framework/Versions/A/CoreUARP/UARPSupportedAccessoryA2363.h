@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2363 : UARPSupportedAccessoryUSBPDMagSafe {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
