@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2755 : UARPSupportedAccessoryWatchPuck {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;

@end
