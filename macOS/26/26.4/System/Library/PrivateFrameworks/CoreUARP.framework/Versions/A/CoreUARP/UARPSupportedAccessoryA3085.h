@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3085 : UARPSupportedAccessoryPencil {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
