@interface BMDataProtection : NSObject

+ (int)biomeProtectionClassToOSProtectionClass:(unsigned long long)a0;
+ (BOOL)requiresUnlockToOpen:(unsigned long long)a0;
+ (BOOL)losesReadAccessOnLock:(unsigned long long)a0;
+ (BOOL)canOpenFilesForProtectionClass:(unsigned long long)a0;
+ (BOOL)canOpenFilesForProtectionClass:(unsigned long long)a0 createNewFile:(BOOL)a1;

@end
