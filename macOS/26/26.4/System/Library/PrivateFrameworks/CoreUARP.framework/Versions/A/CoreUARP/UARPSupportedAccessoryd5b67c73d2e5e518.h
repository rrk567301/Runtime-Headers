@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryd5b67c73d2e5e518 : UARPSupportedAccessoryHID {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (id)productNumber;
+ (id)productGroup;
+ (id)appleModelNumber;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
