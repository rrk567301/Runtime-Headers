@interface EDMarkCertificateVerifier : NSObject

- (char)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forPersistedMessage:(id)a2;
- (char)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forServerSyncedMessage:(id)a2;

@end
