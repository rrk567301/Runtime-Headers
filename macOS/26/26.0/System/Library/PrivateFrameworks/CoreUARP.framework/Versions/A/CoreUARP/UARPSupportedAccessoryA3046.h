@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046 : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
