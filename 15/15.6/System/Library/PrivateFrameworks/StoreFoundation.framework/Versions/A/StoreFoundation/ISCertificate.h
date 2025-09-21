@interface ISCertificate : NSObject {
    struct __SecTrust { } *_trust;
}

- (void)dealloc;
- (char)isValid;
- (void)setCertificateData:(id)a0;
- (char)checkData:(id)a0 againstAppleSignature:(id)a1;
- (char)checkData:(id)a0 againstSignature:(id)a1;

@end
