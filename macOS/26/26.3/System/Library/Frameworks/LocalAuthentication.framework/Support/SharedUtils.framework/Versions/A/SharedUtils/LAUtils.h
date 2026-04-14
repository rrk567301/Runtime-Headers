@interface LAUtils : NSObject

+ (BOOL)isGibraltar;
+ (BOOL)isDaytona;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)hasBridge;
+ (BOOL)isAppleSilicon;
+ (BOOL)isSecureBootCapable;
+ (id)userNameFromUID:(id)a0;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)hasSEP;
+ (id)UIDFromUserName:(id)a0;
+ (int)currentUID;

@end
