@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
