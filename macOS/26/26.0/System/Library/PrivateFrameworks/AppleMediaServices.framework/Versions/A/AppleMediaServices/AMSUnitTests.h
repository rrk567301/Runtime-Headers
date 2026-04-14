@interface AMSUnitTests : NSObject

@property (class, readonly, getter=isRunningUnitTests) BOOL runningUnitTests;

+ (BOOL)isRunningPerformanceTests;
+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)a0;
+ (void)setEncryptionKey:(id)a0 forDataProtectionClass:(unsigned long long)a1;
+ (void)_sync:(id /* block */)a0;
+ (id)_encryptionKeys;

@end
