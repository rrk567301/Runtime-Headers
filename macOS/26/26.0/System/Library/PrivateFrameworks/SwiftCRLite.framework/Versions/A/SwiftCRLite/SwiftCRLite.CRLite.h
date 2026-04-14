@interface SwiftCRLite.CRLite : NSObject {
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ issuers;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)certStatus:(struct __SecCertificate { } *)a0 issuerCert:(struct __SecCertificate { } *)a1 error:(id *)a2;
- (BOOL)issuerEnrolled:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (BOOL)loadFilter:(id)a0 error:(id *)a1;
- (BOOL)loadIssuers:(id)a0 error:(id *)a1;

@end
