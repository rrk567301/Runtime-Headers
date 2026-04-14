@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2617USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)alternativeAppleModelNumbers;

- (void).cxx_destruct;
- (id)init;

@end
