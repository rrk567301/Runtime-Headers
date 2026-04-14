@class SPAKE2Common;

@interface SPAKE2Prover : NSObject <SPAKE2Protocol>

@property (retain) SPAKE2Common *common;

- (id)decryptMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)hasKey;
- (BOOL)keyMatchesWith:(id)a0;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (id)getKey;
- (id)getMsg1WithError:(id *)a0;
- (id)getMsg2WithError:(id *)a0;
- (id)initWithSalt:(id)a0 code:(id)a1 error:(id *)a2;
- (id)initWithSalt:(id)a0 code:(id)a1 rng:(struct ccrng_state { void /* function */ *x0; } *)a2 error:(id *)a3;
- (BOOL)isVerified;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (BOOL)processMsg2:(id)a0 error:(id *)a1;
- (id)testGetW0;
- (id)testGetW1;

@end
