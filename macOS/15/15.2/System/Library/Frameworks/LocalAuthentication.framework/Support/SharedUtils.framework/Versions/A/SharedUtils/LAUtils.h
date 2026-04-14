@interface LAUtils : NSObject

+ (BOOL)hasBridge;
+ (id)localizedStringForKey:(id)a0;
+ (int)currentUID;
+ (int)_eosDeviceType;
+ (BOOL)hasSEP;
+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)runningInOsxSystemContext;
+ (BOOL)isPolicyAcceptingEmptyPassword:(long long)a0;
+ (id)UIDFromUserName:(id)a0;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isAppleSilicon;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)isSecureBootCapable;
+ (BOOL)runningInOsxRecovery;
+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (id)userNameFromUID:(id)a0;

@end
