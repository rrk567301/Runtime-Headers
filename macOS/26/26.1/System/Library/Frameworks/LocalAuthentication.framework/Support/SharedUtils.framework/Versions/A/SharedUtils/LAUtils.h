@interface LAUtils : NSObject

+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)isGibraltar;
+ (BOOL)isSecureBootCapable;
+ (BOOL)isDaytona;
+ (id)UIDFromUserName:(id)a0;
+ (int)currentUID;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)hasSEP;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (BOOL)hasBridge;
+ (BOOL)isAppleSilicon;
+ (id)userNameFromUID:(id)a0;

@end
