@class NSArray, NSString, NSDate;

@interface PKArchiveSignature : NSObject {
    struct __SecTrust { } *_verifyTrustRef;
}

@property (readonly) NSArray *certificateRefs;
@property (readonly) NSString *algorithmType;
@property (readonly) NSDate *trustedTimestampDate;

- (void)dealloc;
- (id)description;
- (char)verifySignedDataReturningError:(id *)a0;
- (char)_hasSigningCertificate:(struct __SecCertificate { } *)a0;
- (char)_verifyCMSWithSignedData:(id)a0 signatureData:(id)a1 error:(id *)a2;
- (char)_verifyLegacyWithSignedData:(id)a0 signatureData:(id)a1 error:(id *)a2;
- (id)signatureDataReturningAlgorithm:(id *)a0;
- (id)signedDataReturningAlgorithm:(id *)a0;
- (struct __SecTrust { } *)verificationTrustRef;
- (char)verifySignedData;

@end
