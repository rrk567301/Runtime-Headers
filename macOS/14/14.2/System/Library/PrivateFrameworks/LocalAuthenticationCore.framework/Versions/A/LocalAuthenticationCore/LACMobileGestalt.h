@interface LACMobileGestalt : NSObject

+ (id)serialNumber;
+ (int)_deviceClass;
+ (unsigned long long)currentDeviceScreenSize;
+ (BOOL)isIdiomPad;
+ (BOOL)isIdiomPhone;
+ (BOOL)isVirtualMachine;

@end
