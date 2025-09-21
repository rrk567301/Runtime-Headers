@interface ASUDefaultsManager : NSObject

+ (char)_isRunningInAppleVirtualMachine;
+ (char)_boolForKey:(struct __CFString { } *)a0 applicationId:(struct __CFString { } *)a1 ifMissing:(char)a2;
+ (id)_copyNumberForKey:(struct __CFString { } *)a0 applicationId:(struct __CFString { } *)a1;
+ (double)_doubleForKey:(struct __CFString { } *)a0 applicationId:(struct __CFString { } *)a1 ifMissing:(double)a2;
+ (void)_setBool:(char)a0 forKey:(struct __CFString { } *)a1 applicationId:(struct __CFString { } *)a2;
+ (void)_setDouble:(double)a0 forKey:(struct __CFString { } *)a1 applicationId:(struct __CFString { } *)a2;
+ (void)_setNullableValue:(void *)a0 forKey:(struct __CFString { } *)a1;
+ (id)copyDefaultsKeyForEncryptionKeyWithIdentifier:(id)a0;

@end
