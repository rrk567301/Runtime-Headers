@interface CPLFingerprintSchemeInvalid : CPLFingerprintScheme {
    BOOL _isMMCSv2;
}

- (BOOL)isValid;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (id)boundaryKey;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (BOOL)isValidSignature:(id)a0;
- (id)fingerprintSchemeDescription;
- (id)zeroByteFileFingerprint;
- (id)boundaryKeyDescription;
- (BOOL)isValidFingerprint:(id)a0;
- (id)_invalidFingerprintForSelector:(SEL)a0 withError:(id *)a1;
- (id)initForMMCSv2:(BOOL)a0;
- (BOOL)isMMCSv2;

@end
