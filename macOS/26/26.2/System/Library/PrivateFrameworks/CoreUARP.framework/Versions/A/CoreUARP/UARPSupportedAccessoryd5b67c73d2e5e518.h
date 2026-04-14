@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryd5b67c73d2e5e518 : UARPSupportedAccessoryHID {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)productGroup;
+ (id)productNumber;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
