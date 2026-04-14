@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3454USB : UARPSupportedAccessoryBeatsUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
