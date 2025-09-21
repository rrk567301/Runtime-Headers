@interface EDMarkCertificateVerifier : NSObject

- (BOOL)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forPersistedMessage:(id)a2;
- (BOOL)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forServerSyncedMessage:(id)a2;

@end
