@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryd5b67c73d2e5e518 : UARPSupportedAccessoryHID {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)productGroup;
+ (id)appleModelNumber;
+ (id)productNumber;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
