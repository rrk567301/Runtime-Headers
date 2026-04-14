@interface EncryptionUtilities : NSObject

+ (id)generateEncryptionKey;
+ (id)encryptData:(id)a0 usingKey:(id)a1;
+ (id)decryptData:(id)a0 usingKey:(id)a1;

@end
