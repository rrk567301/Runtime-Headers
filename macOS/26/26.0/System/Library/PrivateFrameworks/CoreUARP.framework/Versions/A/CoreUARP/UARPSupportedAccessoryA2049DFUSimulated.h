@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049DFUSimulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
