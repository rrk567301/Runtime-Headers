@interface LACMobileGestalt : NSObject

+ (id)serialNumber;
+ (int)_deviceClass;
+ (BOOL)isVirtualMachine;
+ (unsigned long long)currentDeviceScreenSize;
+ (BOOL)isIdiomPad;
+ (BOOL)isIdiomPhone;

@end
