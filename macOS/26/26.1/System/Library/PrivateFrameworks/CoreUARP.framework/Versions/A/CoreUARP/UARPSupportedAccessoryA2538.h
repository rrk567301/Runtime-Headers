@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2538 : UARPSupportedAccessoryPencil {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
