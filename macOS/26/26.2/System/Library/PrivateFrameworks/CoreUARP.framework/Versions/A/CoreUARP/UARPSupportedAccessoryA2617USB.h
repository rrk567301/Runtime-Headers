@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2617USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
