@interface LAUtils : NSObject

+ (BOOL)isSecureBootCapable;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)isAppleSilicon;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (BOOL)isDaytona;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (id)userNameFromUID:(id)a0;
+ (int)currentUID;
+ (BOOL)isGibraltar;
+ (BOOL)hasSEP;
+ (id)UIDFromUserName:(id)a0;
+ (BOOL)hasBridge;

@end
