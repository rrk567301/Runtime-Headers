@interface CRPreflightHelper : NSObject <CoreRepairPreflightProtocol>

+ (id)sharedInstance;

- (void)challengeStrongComponents:(id)a0 withReply:(id /* block */)a1;
- (void)issueRepairCert:(id)a0 withReply:(id /* block */)a1;
- (void)queryRepairDeltaWithReply:(id /* block */)a0;
- (void)sign:(id)a0 keyBlob:(id)a1 withReply:(id /* block */)a2;
- (void)verify:(id)a0 signature:(id)a1 keyBlob:(id)a2 withReply:(id /* block */)a3;

@end
