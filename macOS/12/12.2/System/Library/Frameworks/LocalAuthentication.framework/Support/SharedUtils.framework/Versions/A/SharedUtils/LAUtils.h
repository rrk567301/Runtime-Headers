@interface LAUtils : NSObject

+ (int)currentUID;
+ (BOOL)hasSEP;
+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (int)_eosDeviceType;
+ (BOOL)runningInOsxSystemContext;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)runningInOsxRecovery;
+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isAppleSilicon;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (id)UIDFromUserName:(id)a0;
+ (id)userNameFromUID:(id)a0;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)isSecureBootCapable;

@end
