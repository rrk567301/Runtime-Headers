@interface SFCertificateTrust : NSObject {
    id _reserved_SFCertificateTrust;
}

- (void)dealloc;
- (id)init;
- (void)saveTrustValuesInDomain:(unsigned int)a0;
- (void)saveTrustValues;
- (void)setCertificateData:(id)a0;
- (id)certificateData;
- (id)initWithCertificateData:(id)a0;
- (id)dictionaryExists:(id)a0 policy:(struct __SecPolicy { } *)a1 policyString:(id)a2 allowedError:(id)a3;

@end
