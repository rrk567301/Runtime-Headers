@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryd5b67c73d2e5e518 : UARPSupportedAccessoryHID {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)productNumber;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;
+ (id)productGroup;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
