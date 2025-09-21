@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046DFUSimulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
