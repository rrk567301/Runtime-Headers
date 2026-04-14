@interface LACMobileGestalt : NSObject

@property (class, readonly, nonatomic) BOOL deviceHasFaceID;
@property (class, readonly, nonatomic) BOOL deviceHasOpticID;
@property (class, readonly, nonatomic) BOOL deviceHasTouchID;
@property (class, readonly, nonatomic) long long builtinBiometryType;
@property (class, readonly, nonatomic) BOOL isAppleSilicon;
@property (class, readonly, nonatomic) BOOL isDaytona;
@property (class, readonly, nonatomic) BOOL isGibraltar;
@property (class, readonly, nonatomic) BOOL isLidClosed;
@property (class, readonly, nonatomic) BOOL isRunningInRecovery;
@property (class, readonly, nonatomic) BOOL isRunningInSystemContext;
@property (class, readonly, nonatomic) BOOL isRunningInFVUnlock;
@property (class, readonly, nonatomic) BOOL isSecureBootCapable;
@property (class, readonly, nonatomic) BOOL hasBridge;
@property (class, readonly, nonatomic) BOOL hasSEP;

+ (id)serialNumber;
+ (int)_deviceClass;
+ (BOOL)isVirtualMachine;
+ (int)_eosDeviceType;
+ (unsigned long long)currentDeviceScreenSize;
+ (unsigned long long)faceIDCameraOrientation;
+ (BOOL)isIdiomPad;
+ (BOOL)isIdiomPhone;
+ (id)marketingDeviceFamilyName;
+ (id)marketingDeviceName;

@end
