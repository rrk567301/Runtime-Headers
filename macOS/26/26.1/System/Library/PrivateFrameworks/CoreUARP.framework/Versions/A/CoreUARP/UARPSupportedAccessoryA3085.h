@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3085 : UARPSupportedAccessoryPencil {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
