@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (id)modelName;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
