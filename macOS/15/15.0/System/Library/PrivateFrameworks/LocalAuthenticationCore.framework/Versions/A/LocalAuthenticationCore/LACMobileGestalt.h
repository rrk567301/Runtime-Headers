@interface LACMobileGestalt : NSObject

@property (class, readonly, nonatomic) BOOL deviceHasFaceID;
@property (class, readonly, nonatomic) BOOL deviceHasOpticID;
@property (class, readonly, nonatomic) BOOL deviceHasTouchID;
@property (class, readonly, nonatomic) BOOL isDaytona;
@property (class, readonly, nonatomic) BOOL isLidClosed;
@property (class, readonly, nonatomic) BOOL hasBridge;
@property (class, readonly, nonatomic) BOOL hasSEP;

+ (id)serialNumber;
+ (int)_deviceClass;
+ (BOOL)isVirtualMachine;
+ (int)_eosDeviceType;
+ (BOOL)isGibraltar;
+ (BOOL)isAppleSilicon;
+ (id)marketingDeviceFamilyName;
+ (unsigned long long)currentDeviceScreenSize;
+ (unsigned long long)faceIDCameraOrientation;
+ (BOOL)isIdiomPad;
+ (BOOL)isIdiomPhone;
+ (id)marketingDeviceName;

@end
