@interface SwiftCRLite.SecCRLite : NSObject {
    void /* unknown type, empty encoding */ filters;
}

- (void).cxx_destruct;
- (id)init;
- (id)getCoverageInfo;
- (long long)certStatus:(struct __SecCertificate { } *)a0 issuerCert:(struct __SecCertificate { } *)a1 scts:(id)a2 error:(id *)a3;
- (BOOL)loadFilter:(id)a0 error:(id *)a1;

@end
