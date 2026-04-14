@interface SFCertificateTrust : NSObject {
    id _reserved_SFCertificateTrust;
}

- (void)dealloc;
- (id)init;
- (void)saveTrustValues;
- (void)saveTrustValuesInDomain:(unsigned int)a0;
- (id)certificateData;
- (id)dictionaryExists:(id)a0 policy:(struct __SecPolicy { } *)a1 policyString:(id)a2 allowedError:(id)a3;
- (id)initWithCertificateData:(id)a0;
- (void)setCertificateData:(id)a0;

@end
