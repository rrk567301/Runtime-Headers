@interface CPLFingerprintSchemeInvalid : CPLFingerprintScheme

- (BOOL)isValid;
- (id)fingerprintSchemeDescription;
- (id)zeroByteFileFingerprint;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (id)_invalidFingerprintForSelector:(SEL)a0 withError:(id *)a1;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (BOOL)isMMCSv2;

@end
