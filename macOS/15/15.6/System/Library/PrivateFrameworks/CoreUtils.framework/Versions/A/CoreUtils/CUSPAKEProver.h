@class NSData;

@interface CUSPAKEProver : NSObject {
    NSData *_passwordData;
    NSData *_sessionKey;
    struct ccspake_ctx { struct ccspake_cp *x0; struct ccspake_mac *x1; struct ccrng_state *x2; BOOL x3; unsigned long long x4; unsigned char x5[20]; unsigned char x6; struct ccdigest_ctx { unsigned char x0[1]; } x7[26]; unsigned char x8[64]; unsigned long long x9[0]; } *_spakeContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)finishAndReturnError:(id *)a0;
- (id)generateM1AndReturnError:(id *)a0;
- (id)generateM3WithM2:(id)a0 error:(id *)a1;
- (id)initWithPasswordCString:(const char *)a0;
- (id)initWithPasswordPtr:(const void *)a0 passwordLength:(unsigned long long)a1;
- (id)initWithPasswordString:(id)a0;

@end
