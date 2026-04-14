@interface UARPSupportedAccessoryUSBPD : UARPSupportedAccessory

+ (long long)locationType;
+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (long long)deviceClass;
+ (id)appleModelNumber;

- (id)init;

@end
