@interface NEIKEv2CryptoKitHPKE : NSObject {
    void /* unknown type, empty encoding */ payload;
    void /* unknown type, empty encoding */ aad;
    void /* unknown type, empty encoding */ psk;
    void /* unknown type, empty encoding */ pskID;
    void /* unknown type, empty encoding */ key;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 aad:(id)a1 psk:(id)a2 pskID:(id)a3 keyData:(id)a4;
- (id)initWithPayload:(id)a0 aad:(id)a1 psk:(id)a2 pskID:(id)a3 keyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a4;
- (id)performOpenAndReturnError:(id *)a0;
- (id)performSealAndReturnError:(id *)a0;

@end
