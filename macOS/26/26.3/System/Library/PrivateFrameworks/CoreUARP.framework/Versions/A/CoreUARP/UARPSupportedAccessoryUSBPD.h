@interface UARPSupportedAccessoryUSBPD : UARPSupportedAccessory

+ (long long)deviceClass;
+ (long long)locationType;
+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (id)init;

@end
