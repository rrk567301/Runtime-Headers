@interface TRISignatureKey : NSObject {
    struct __SecKey { } *_key;
}

+ (id)keyFromData:(id)a0;
+ (struct __SecKey { } *)_keyFromCertificateChain:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithKey:(struct __SecKey { } *)a0;
- (char)validateBase64Signature:(id)a0 data:(id)a1;
- (char)_validateBase64Signature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (char)_validateSignature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (char)validateBase64Signature:(id)a0 forFile:(id)a1;

@end
