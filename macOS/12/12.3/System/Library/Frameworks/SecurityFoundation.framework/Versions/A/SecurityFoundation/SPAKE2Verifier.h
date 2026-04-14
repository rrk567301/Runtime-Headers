@class SPAKE2Common;

@interface SPAKE2Verifier : NSObject <SPAKE2Protocol>

@property (retain) SPAKE2Common *common;

+ (id)generateCodeWithError:(id *)a0;

- (void).cxx_destruct;
- (id)getKey;
- (id)getMsg1WithError:(id *)a0;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (id)getMsg2WithError:(id *)a0;
- (BOOL)processMsg2:(id)a0 error:(id *)a1;
- (BOOL)isVerified;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (id)decryptMessage:(id)a0 error:(id *)a1;
- (id)initWithSalt:(id)a0 code:(id)a1 error:(id *)a2;
- (id)getCode;

@end
