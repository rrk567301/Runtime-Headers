@interface UARPSupportedAccessoryUSBPD : UARPSupportedAccessory

+ (long long)deviceClass;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (long long)locationType;
+ (id)appleModelNumber;

- (id)init;

@end
