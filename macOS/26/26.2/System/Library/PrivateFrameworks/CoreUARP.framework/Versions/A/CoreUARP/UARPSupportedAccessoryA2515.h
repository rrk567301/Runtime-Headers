@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2515 : UARPSupportedAccessoryWatchPuck {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
