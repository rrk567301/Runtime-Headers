@class UARPAccessoryHardwareB2PHID;

@interface UARPSupportedAccessoryA2924USB : UARPSupportedAccessoryBeatsUSB {
    UARPAccessoryHardwareB2PHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
