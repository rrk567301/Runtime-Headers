@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3122USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
