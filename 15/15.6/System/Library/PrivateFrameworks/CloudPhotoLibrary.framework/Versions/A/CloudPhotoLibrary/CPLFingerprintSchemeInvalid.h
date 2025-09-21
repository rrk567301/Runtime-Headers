@interface CPLFingerprintSchemeInvalid : CPLFingerprintScheme {
    char _isMMCSv2;
}

- (char)isValid;
- (id)boundaryKey;
- (char)isValidSignature:(id)a0;
- (id)fingerprintSchemeDescription;
- (id)zeroByteFileFingerprint;
- (id)boundaryKeyDescription;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (char)isValidFingerprint:(id)a0;
- (id)_invalidFingerprintForSelector:(SEL)a0 withError:(id *)a1;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (id)initForMMCSv2:(char)a0;
- (char)isMMCSv2;

@end
