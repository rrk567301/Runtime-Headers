@interface UARPSupportedAccessoryUSBPD : UARPSupportedAccessory

+ (long long)deviceClass;
+ (unsigned short)vendorID;
+ (unsigned short)productID;
+ (long long)locationType;
+ (id)appleModelNumber;

- (id)init;

@end
