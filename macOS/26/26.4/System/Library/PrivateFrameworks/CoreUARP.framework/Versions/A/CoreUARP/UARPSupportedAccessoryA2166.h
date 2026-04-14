@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2166 : UARPSupportedAccessoryUSBPDPowerAdapterLegacy {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
