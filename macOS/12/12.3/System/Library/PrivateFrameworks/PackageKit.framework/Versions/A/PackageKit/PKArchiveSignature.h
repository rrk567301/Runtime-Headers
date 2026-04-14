@class NSArray, NSString, NSDate;

@interface PKArchiveSignature : NSObject {
    struct __SecTrust { } *_verifyTrustRef;
}

@property (readonly) NSArray *certificateRefs;
@property (readonly) NSString *algorithmType;
@property (readonly) NSDate *trustedTimestampDate;

- (void)dealloc;
- (id)description;
- (id)signedDataReturningAlgorithm:(id *)a0;
- (id)signatureDataReturningAlgorithm:(id *)a0;
- (BOOL)_hasSigningCertificate:(struct __SecCertificate { } *)a0;
- (BOOL)verifySignedDataReturningError:(id *)a0;
- (BOOL)_verifyLegacyWithSignedData:(id)a0 signatureData:(id)a1 error:(id *)a2;
- (BOOL)_verifyCMSWithSignedData:(id)a0 signatureData:(id)a1 error:(id *)a2;
- (BOOL)verifySignedData;
- (struct __SecTrust { } *)verificationTrustRef;

@end
