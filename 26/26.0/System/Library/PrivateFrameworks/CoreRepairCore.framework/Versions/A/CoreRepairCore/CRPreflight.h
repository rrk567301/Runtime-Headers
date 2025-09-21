@interface CRPreflight : NSObject

- (id)_getVersionInfo:(id)a0;
- (id)_sendBAARequest:(id)a0 proxySettings:(id)a1 withError:(id *)a2;
- (void)challengeStrongComponents:(id)a0 withReply:(id /* block */)a1;
- (id)componentsWithPrimaryKeys:(id)a0;
- (void)issueRepairCert:(id)a0 withReply:(id /* block */)a1;
- (void)queryRepairDeltaWithReply:(id /* block */)a0;
- (id)requestBAACertificates:(id)a0 apticket:(id)a1 proxySettings:(id)a2 withError:(id *)a3;
- (id)sha256Data:(id)a0;
- (id)sign:(id)a0 keyBlob:(id)a1;
- (BOOL)verify:(id)a0 signature:(id)a1 keyBlob:(id)a2;

@end
