@interface AMSUnitTests : NSObject

@property (class, readonly, getter=isRunningUnitTests) BOOL runningUnitTests;

+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)a0;
+ (BOOL)isRunningPerformanceTests;
+ (void)setEncryptionKey:(id)a0 forDataProtectionClass:(unsigned long long)a1;
+ (void)_sync:(id /* block */)a0;
+ (id)_encryptionKeys;

@end
