@interface DEEncrypted : NSObject

+ (id)getKey:(unsigned long long)a0;
+ (id)decrypt:(id)a0;
+ (id)decrypt:(id)a0 allowAllKeys:(char)a1 keyVersion:(id *)a2;
+ (id)decrypt:(id)a0 keyVersion:(id *)a1;
+ (id)decryptAll:(id)a0;
+ (char)decryptAllFrom:(id)a0 to:(id)a1;
+ (id)decryptFrom:(id)a0 name:(id)a1 base:(id)a2;
+ (char)decryptFrom:(id)a0 to:(id)a1 allowAllKeys:(char)a2 keyVersion:(id *)a3;
+ (char)decryptFrom:(id)a0 to:(id)a1 version:(id)a2;
+ (char)decryptFrom:(id)a0 to:(id)a1 version:(id)a2 allowAllKeys:(char)a3;
+ (id)encrypt:(id)a0 keyId:(unsigned long long)a1 privateKey:(id)a2 multipart:(char)a3;
+ (id)encryptFrom:(id)a0 name:(id)a1 base:(id)a2 keyId:(unsigned long long)a3 privateKey:(id)a4 multipart:(char)a5;
+ (char)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 encryptedPb:(void *)a4;
+ (char)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 multipart:(char)a4;
+ (id)getKeyWithVersion:(id)a0;
+ (id)getKeyWithVersion:(id)a0 symmetric:(char *)a1;
+ (id)getSymmetricKey:(id)a0 publicKey:(id)a1 symmetricKeyIV:(id *)a2 signature:(id *)a3;
+ (id)getSymmetricKey:(id)a0 symmetricKeyIV:(id)a1 signature:(id)a2;
+ (id)getSymmetricSrc:(id)a0 publicKey:(id)a1;
+ (char)isPrivateKey:(id)a0 publicKey:(id)a1;
+ (char)isSymmetric:(unsigned long long)a0;
+ (id)toEnvelope:(char)a0 iv:(id)a1 hmac:(id)a2 keyVersion:(id)a3 payload:(id)a4;
+ (id)versionFile:(id)a0;
+ (char)wrapFrom:(id)a0 to:(id)a1 encryptedPb:(void *)a2 multipart:(char)a3;

@end
