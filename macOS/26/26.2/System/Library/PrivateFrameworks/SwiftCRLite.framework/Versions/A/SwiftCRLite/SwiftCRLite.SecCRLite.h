@interface SwiftCRLite.SecCRLite : NSObject {
    void /* unknown type, empty encoding */ filters;
}

- (void).cxx_destruct;
- (id)init;
- (int)certStatus:(struct __SecCertificate { } *)a0 issuerCert:(struct __SecCertificate { } *)a1 scts:(const struct __CFArray { } *)a2 error:(id *)a3;
- (id)getCoverageInfo;
- (BOOL)isCertCovered:(struct __SecCertificate { } *)a0 issuerCert:(struct __SecCertificate { } *)a1 scts:(const struct __CFArray { } *)a2 error:(id *)a3;
- (BOOL)loadFilter:(id)a0 error:(id *)a1;

@end
