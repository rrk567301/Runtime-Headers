@interface SwiftCRLite.CRLite : NSObject {
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ issuers;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)certStatus:(struct __SecCertificate { } *)a0 issuerCert:(struct __SecCertificate { } *)a1 error:(id *)a2;
- (BOOL)issuerEnrolled:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (BOOL)loadFilter:(id)a0 error:(id *)a1;
- (BOOL)loadIssuers:(id)a0 error:(id *)a1;

@end
