@interface PKXARArchiveSignature : PKArchiveSignature {
    struct __xar_signature_t { } *_sig;
}

- (id)algorithmType;
- (id)certificateRefs;
- (id)signedDataReturningAlgorithm:(id *)a0;
- (id)signatureDataReturningAlgorithm:(id *)a0;
- (BOOL)_hasSigningCertificate:(struct __SecCertificate { } *)a0;
- (id)initWithXARSignature:(struct __xar_signature_t { } *)a0;

@end
