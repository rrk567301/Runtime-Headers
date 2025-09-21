@interface DESSignatureKey : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_key;
}

+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)keyFromCertificateChain:(id)a0;
+ (id)keyFromData:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (char)validateBase64Signature:(id)a0 data:(id)a1;
- (char)validateBase64Signature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (char)validateSignature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;

@end
