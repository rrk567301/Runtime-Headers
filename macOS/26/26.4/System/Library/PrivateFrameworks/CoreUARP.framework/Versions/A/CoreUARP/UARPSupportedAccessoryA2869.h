@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2869 : UARPSupportedAccessoryUSBPDDongle {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
