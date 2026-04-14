@interface AMSUnitTests : NSObject

@property (class, readonly, getter=isRunningUnitTests) BOOL runningUnitTests;

+ (void)_sync:(id /* block */)a0;
+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)a0;
+ (BOOL)isRunningPerformanceTests;
+ (id)_encryptionKeys;
+ (void)setEncryptionKey:(id)a0 forDataProtectionClass:(unsigned long long)a1;

@end
