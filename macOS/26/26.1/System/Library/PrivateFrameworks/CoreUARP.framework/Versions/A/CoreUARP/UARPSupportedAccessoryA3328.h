@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA3328 : UARPSupportedAccessoryUSBPDPowerAdapter {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
