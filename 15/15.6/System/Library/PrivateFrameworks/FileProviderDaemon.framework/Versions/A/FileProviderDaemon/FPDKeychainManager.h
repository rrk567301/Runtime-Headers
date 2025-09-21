@class NSString;

@interface FPDKeychainManager : NSObject

@property (copy, nonatomic) NSString *keyChainStoringTag;
@property (copy, nonatomic) NSString *keyChainStoringLabel;

+ (id)sharedInstance;
+ (struct __CFString { } *)defaultSigningAlgorithm;
+ (char)isSigningAlgorithmSupported:(id)a0 shouldUpdateXattr:(char *)a1;
+ (char)knownSigningAlgorithm:(id)a0;
+ (id)sharedInstanceForTesting;

- (id)init;
- (void).cxx_destruct;
- (id)signData:(id)a0 error:(id *)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_getKeyFromKeychainWithError:(char)a0 error:(id *)a1;
- (char)_t_insertLegacyKeysWithError:(id *)a0;
- (id)createSignatureForData:(id)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)generateKeyPair:(id *)a0;
- (id)generateSignatureForContent:(id)a0 error:(id *)a1;
- (int)getAndUpgradeLegacyKey:(char)a0 result:(const void **)a1;
- (id)getKeyQuery:(char)a0;
- (id)getLegacyKeyQuery:(char)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)getPrivateKey:(id *)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)getPrivateKeyFromKeychainWithError:(id *)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)getPublicKeyFromKeychainWithError:(id *)a0;
- (char)removeAllKeys:(id *)a0;
- (id)storeQueryForClass:(struct __CFString { } *)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;

@end
