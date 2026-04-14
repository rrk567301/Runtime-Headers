@interface LAUtils : NSObject

+ (BOOL)isSecureBootCapable;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (BOOL)isDaytona;
+ (int)currentUID;
+ (id)UIDFromUserName:(id)a0;
+ (BOOL)isAppleSilicon;
+ (id)userNameFromUID:(id)a0;
+ (BOOL)hasSEP;
+ (BOOL)hasBridge;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)isGibraltar;

@end
