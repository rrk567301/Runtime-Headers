@interface ByteMatrixVerification.BytesMatrixSignatureVerifier : NSObject

+ (BOOL)verifySignatureAndHashWithVerificationKey:(id)a0 matrixDataBuffer:(id)a1 signature:(id)a2 parallelHash:(BOOL)a3 error:(id *)a4;

- (id)init;

@end
