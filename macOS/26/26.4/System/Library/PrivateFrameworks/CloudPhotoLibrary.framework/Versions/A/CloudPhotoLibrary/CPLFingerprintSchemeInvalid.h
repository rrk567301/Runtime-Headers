@interface CPLFingerprintSchemeInvalid : CPLFingerprintScheme {
    BOOL _isMMCSv2;
}

- (id)boundaryKey;
- (BOOL)isValid;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (BOOL)isValidSignature:(id)a0;
- (id)fingerprintSchemeDescription;
- (id)boundaryKeyDescription;
- (BOOL)isValidFingerprint:(id)a0;
- (id)zeroByteFileFingerprint;
- (id)_invalidFingerprintForSelector:(SEL)a0 withError:(id *)a1;
- (id)initForMMCSv2:(BOOL)a0;
- (BOOL)isMMCSv2;

@end
