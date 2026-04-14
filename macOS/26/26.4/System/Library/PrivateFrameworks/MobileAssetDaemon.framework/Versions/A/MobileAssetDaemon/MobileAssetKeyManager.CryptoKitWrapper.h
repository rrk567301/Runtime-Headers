@interface MobileAssetKeyManager.CryptoKitWrapper : NSObject

+ (id)decryptKnoxKeyWithEncData:(id)a0 encapsulatedKey:(id)a1 recipientPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 error:(id *)a3;

- (id)init;

@end
