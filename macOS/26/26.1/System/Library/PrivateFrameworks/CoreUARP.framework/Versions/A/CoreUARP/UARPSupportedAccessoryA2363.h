@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2363 : UARPSupportedAccessoryUSBPDMagSafe {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (void).cxx_destruct;
- (id)init;

@end
