@class NSData;

@interface CUSPAKEVerifier : NSObject {
    NSData *_passwordData;
    BOOL _rfc9383;
    struct ccspake_ctx { struct ccspake_cp *x0; struct ccspake_mac *x1; struct ccrng_state *x2; BOOL x3; unsigned long long x4; unsigned char x5[20]; unsigned char x6; struct ccdigest_ctx { unsigned char x0[1]; } x7[26]; unsigned char x8[64]; unsigned long long x9[0]; } *_spakeContext;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPasswordString:(id)a0 rfc9383:(BOOL)a1;
- (id)finishWithM3:(id)a0 error:(id *)a1;
- (id)generateM2WithM1:(id)a0 error:(id *)a1;
- (id)initWithPasswordCString:(const char *)a0 rfc9383:(BOOL)a1;
- (id)initWithPasswordPtr:(const void *)a0 passwordLength:(unsigned long long)a1 rfc9383:(BOOL)a2;

@end
