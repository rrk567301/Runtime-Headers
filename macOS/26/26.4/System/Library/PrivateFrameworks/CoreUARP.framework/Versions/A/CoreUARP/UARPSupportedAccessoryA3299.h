@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA3299 : UARPSupportedAccessoryUSBPDDongle {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
