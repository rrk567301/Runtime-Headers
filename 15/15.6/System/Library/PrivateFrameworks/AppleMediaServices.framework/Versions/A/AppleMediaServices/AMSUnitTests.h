@interface AMSUnitTests : NSObject

@property (class, readonly, getter=isRunningUnitTests) char runningUnitTests;

+ (id)_encryptionKeys;
+ (void)_sync:(id /* block */)a0;
+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)a0;
+ (void)setEncryptionKey:(id)a0 forDataProtectionClass:(unsigned long long)a1;

@end
