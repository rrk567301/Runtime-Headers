@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
