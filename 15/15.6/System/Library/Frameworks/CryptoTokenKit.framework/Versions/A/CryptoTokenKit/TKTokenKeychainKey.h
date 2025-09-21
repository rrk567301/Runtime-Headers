@class NSString, NSData;

@interface TKTokenKeychainKey : TKTokenKeychainItem

@property (readonly) unsigned long long keyUsage;
@property (copy) NSString *keyType;
@property (copy) NSData *applicationTag;
@property long long keySizeInBits;
@property (copy) NSData *publicKeyData;
@property (copy) NSData *publicKeyHash;
@property char canDecrypt;
@property char canSign;
@property char canPerformKeyExchange;
@property (getter=isSuitableForLogin) char suitableForLogin;

+ (char)canDecrypt:(unsigned char)a0;
+ (char)canPerformKeyExchange:(unsigned char)a0;
+ (char)canSign:(unsigned char)a0;

- (void).cxx_destruct;
- (id)keychainAttributes;
- (id)encodedObjectID;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 objectID:(id)a1;
- (id)initWithItemInfo:(id)a0;
- (id)initWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 label:(id)a1 objectID:(id)a2 canSign:(char)a3 canDecrypt:(char)a4 canPerformKeyExchange:(char)a5;
- (char)satisfiesKeyUsage:(unsigned long long)a0;
- (char)setupWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 label:(id)a1;

@end
