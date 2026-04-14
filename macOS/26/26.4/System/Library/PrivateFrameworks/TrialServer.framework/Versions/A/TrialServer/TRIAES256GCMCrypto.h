@interface TRIAES256GCMCrypto : NSObject

+ (id)decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (BOOL)_commonCryptoGCMFunctionsAvailable;
+ (id)_decryptDataWithCommonCrypto:(id)a0 withKey:(id)a1 aad:(id)a2 error:(id *)a3;
+ (id)_decryptDataWithCryptoKit:(id)a0 withKey:(id)a1 aad:(id)a2 error:(id *)a3;
+ (id)decryptData:(id)a0 withKey:(id)a1 aad:(id)a2 error:(id *)a3;

@end
