@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA3351 : UARPSupportedAccessoryUSBPDPowerAdapter {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
