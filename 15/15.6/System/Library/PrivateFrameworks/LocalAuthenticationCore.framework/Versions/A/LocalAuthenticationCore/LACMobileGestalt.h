@interface LACMobileGestalt : NSObject

@property (class, readonly, nonatomic) char deviceHasFaceID;
@property (class, readonly, nonatomic) char deviceHasOpticID;
@property (class, readonly, nonatomic) char deviceHasTouchID;
@property (class, readonly, nonatomic) char isAppleSilicon;
@property (class, readonly, nonatomic) char isDaytona;
@property (class, readonly, nonatomic) char isGibraltar;
@property (class, readonly, nonatomic) char isLidClosed;
@property (class, readonly, nonatomic) char isSecureBootCapable;
@property (class, readonly, nonatomic) char hasBridge;
@property (class, readonly, nonatomic) char hasSEP;

+ (id)serialNumber;
+ (char)isVirtualMachine;
+ (int)_eosDeviceType;
+ (int)_deviceClass;
+ (unsigned long long)currentDeviceScreenSize;
+ (unsigned long long)faceIDCameraOrientation;
+ (char)isIdiomPad;
+ (char)isIdiomPhone;
+ (id)marketingDeviceFamilyName;
+ (id)marketingDeviceName;

@end
