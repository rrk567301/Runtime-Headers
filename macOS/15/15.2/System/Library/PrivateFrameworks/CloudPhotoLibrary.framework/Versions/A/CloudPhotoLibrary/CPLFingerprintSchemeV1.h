@interface CPLFingerprintSchemeV1 : CPLFingerprintScheme

- (id)fingerprintSchemeDescription;
- (void **)_createSignatureGenerator;
- (BOOL)isValidSignatureBytes:(const void *)a0;

@end
