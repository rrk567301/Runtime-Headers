@interface LAUtils : NSObject

+ (int)currentUID;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)isGibraltar;
+ (id)userNameFromUID:(id)a0;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)isAppleSilicon;
+ (BOOL)hasBridge;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (BOOL)isDaytona;
+ (id)UIDFromUserName:(id)a0;
+ (BOOL)isSecureBootCapable;
+ (BOOL)hasSEP;

@end
