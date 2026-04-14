@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046 : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
