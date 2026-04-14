@interface DACrypto : NSObject

+ (id)decryptData:(id)a0 withCryptoInfo:(id)a1 encapsulatedKey:(id)a2 error:(id *)a3;
+ (id)encryptData:(id)a0 withCryptoInfo:(id)a1 encapsulatedKey:(id *)a2 error:(id *)a3;

- (id)init;

@end
