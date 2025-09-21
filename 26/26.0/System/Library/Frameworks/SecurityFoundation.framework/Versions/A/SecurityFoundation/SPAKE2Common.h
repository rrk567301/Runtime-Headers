@class NSString, _SFAESKey, NSData, NSMutableData;

@interface SPAKE2Common : NSObject

@property struct ccrng_state { void /* function */ *x0; } *rng;
@property struct ccspake_ctx { struct ccspake_cp *x0; struct ccspake_mac *x1; struct ccrng_state *x2; BOOL x3; unsigned long long x4; unsigned char x5[20]; unsigned char x6; struct ccdigest_ctx { unsigned char x0[1]; } x7[26]; unsigned char x8[64]; unsigned long long x9[0]; } *spake_ctx;
@property (retain) NSString *code;
@property (retain) NSData *salt;
@property struct ccspake_cp { } *cp;
@property struct ccspake_mac { } *mac;
@property (retain) NSData *w0;
@property (retain) NSData *w1;
@property unsigned long long w_size;
@property unsigned long long point_size;
@property (retain) _SFAESKey *session_key;
@property (retain) NSMutableData *raw_session_key;
@property BOOL verified;

- (void)dealloc;
- (id)decryptMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)setupRFCProver:(id *)a0;
- (id)_decodeBase64:(id)a0 withKey:(id)a1 info:(id)a2 error:(id *)a3;
- (id)_decodeBinary:(id)a0 withKey:(id)a1 info:(id)a2 error:(id *)a3;
- (id)_decryptMessageInBase64:(id)a0 info:(id)a1 error:(id *)a2;
- (id)_decryptMessageInBinary:(id)a0 info:(id)a1 error:(id *)a2;
- (id)_encodeBase64:(id)a0 withKey:(id)a1 info:(id)a2 error:(id *)a3;
- (id)_encodeBinary:(id)a0 withKey:(id)a1 info:(id)a2 error:(id *)a3;
- (id)_encryptMessageAsBase64:(id)a0 info:(id)a1 error:(id *)a2;
- (id)_encryptMessageAsBinary:(id)a0 info:(id)a1 error:(id *)a2;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (BOOL)generateStateWithError:(id *)a0;
- (id)getMsg1WithError:(id *)a0;
- (id)getMsg2WithError:(id *)a0;
- (id)getRawSessionKey;
- (id)getSessionKey;
- (id)initWithSalt:(id)a0 code:(id)a1 rng:(struct ccrng_state { void /* function */ *x0; } *)a2 cp:(struct ccspake_cp { } *)a3;
- (BOOL)isVerified;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (BOOL)processMsg2Orig:(id)a0 error:(id *)a1;
- (BOOL)processMsg2Web:(id)a0 error:(id *)a1;
- (BOOL)setupProver:(id *)a0;
- (BOOL)setupRFCVerifier:(id *)a0;
- (BOOL)setupVerifier:(id *)a0;

@end
