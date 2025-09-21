@interface LAUtils : NSObject

+ (char)hasBridge;
+ (id)localizedStringForKey:(id)a0;
+ (int)currentUID;
+ (int)_eosDeviceType;
+ (char)hasSEP;
+ (char)isDaytona;
+ (char)isGibraltar;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (char)isScreenLockedWithError:(id *)a0;
+ (char)runningInOsxSystemContext;
+ (id)UIDFromUserName:(id)a0;
+ (char)doesSessionExistForUUID:(unsigned int)a0;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (char)isAppleSilicon;
+ (char)isSecureBootCapable;
+ (char)runningInOsxRecovery;
+ (id)userNameFromUID:(id)a0;

@end
