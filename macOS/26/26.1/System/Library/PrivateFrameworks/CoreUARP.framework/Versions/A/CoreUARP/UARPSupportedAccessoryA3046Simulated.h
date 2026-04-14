@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
