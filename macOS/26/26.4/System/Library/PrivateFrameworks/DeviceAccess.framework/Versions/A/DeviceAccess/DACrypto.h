@interface DACrypto : NSObject

+ (id)decryptData:(id)a0 withCryptoInfo:(id)a1 sessionID:(id)a2 error:(id *)a3;
+ (id)encryptData:(id)a0 withCryptoInfo:(id)a1 sessionID:(id)a2 error:(id *)a3;
+ (BOOL)generateKeyPairForSuite:(unsigned long long)a0 publicKey:(id *)a1 privateKey:(id *)a2 error:(id *)a3;
+ (id)startSessionWithInfo:(id)a0 error:(id *)a1;
+ (BOOL)stopSessionWithInfo:(id)a0 error:(id *)a1;
+ (BOOL)updateSessionWithInfo:(id)a0 error:(id *)a1;

- (id)init;

@end
