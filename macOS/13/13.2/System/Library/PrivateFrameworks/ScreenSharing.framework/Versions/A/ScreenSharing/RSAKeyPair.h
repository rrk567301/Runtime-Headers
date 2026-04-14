@class NSData, NSString;

@interface RSAKeyPair : NSObject <RSAKeyPairProtocol> {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *rsaPublicKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *rsaPrivateKey;
}

@property (retain) NSData *rsaPrivateKeyData;
@property (retain) NSData *rsaPublicKeyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appName;
+ (id)basePath;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)fetchKeyFromKeychainWithName:(id)a0 class:(id)a1;
+ (id)privateKeychainPath;
+ (struct __SecKeychain { } *)openKeychainWithPath:(const char *)a0 private:(BOOL)a1;
+ (void)removePrivateKeychain;
+ (struct __SecKeychain { } *)privateKeyKeychain;
+ (id)pathForRSAPublicKeyWithLabel:(id)a0;
+ (id)loadRSAPublicKeyWithLabel:(id)a0;
+ (BOOL)saveRSAPublicKey:(id)a0 label:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)secKeyRefFromKeyData:(id)a0;
+ (id)keySubpath;
+ (void)RaiseEUID:(const char *)a0;
+ (void)LowerEUID:(const char *)a0;
+ (void)TerminateApp;
+ (unsigned char)rsaKeyPairSimpleHash:(id)a0;
+ (id)keysPath;
+ (id)rsaPublicKeyStoragePath;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)importRSAPublicKey:(id)a0 label:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)retrieveRSAPublicKeyWithLabel:(id)a0;
+ (void)removeRSAPublicKeyWithLabel:(id)a0;
+ (id)encryptWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 data:(const char *)a1 length:(long long)a2;

- (void)dealloc;
- (id)init;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKey;
- (id)decrypt:(id)a0;
- (void)freeKeys;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKeyFromKeychain;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyFromKeychain;
- (void)deprecateKeyPair:(int)a0;
- (void)purgeKeyPair;
- (BOOL)generateKeyPairWithKeySize:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKeyFromCache;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyFromCache;
- (id)attributesForPrivateKey;
- (id)exportedRSAPublicKeyNoCache:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)exportedRSAPrivateKeyNoCache:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)exportedRSAPublicKey;
- (BOOL)makeKeysWithKeySize:(id)a0;
- (id)preferredKeySizeInBits;
- (BOOL)loadAndVerifyKeys;
- (id)encrypt:(const char *)a0 length:(long long)a1;

@end
