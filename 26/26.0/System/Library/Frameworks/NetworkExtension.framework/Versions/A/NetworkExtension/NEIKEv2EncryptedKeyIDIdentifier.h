@class NSData;

@interface NEIKEv2EncryptedKeyIDIdentifier : NEIKEv2KeyIDIdentifier {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_keyRef;
    NSData *_keyData;
    NSData *_aad;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)decryptWithSession:(id)a0 returnError:(id *)a1;
- (id)initWithKeyIDString:(id)a0 aad:(id)a1 keyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (id)initWithKeyID:(id)a0 aad:(id)a1 key:(id)a2;
- (id)initWithKeyID:(id)a0 aad:(id)a1 keyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (id)initWithKeyIDString:(id)a0 aad:(id)a1 key:(id)a2;

@end
