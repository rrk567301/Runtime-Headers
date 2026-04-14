@class KTAccountPublicID;

@interface TransparencyStaticKey : NSObject

@property (copy) KTAccountPublicID *accountIdentity;

- (void).cxx_destruct;
- (void)listKTSessions:(id /* block */)a0;
- (void)deleteKTSession:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByHandle:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByID:(id)a0 complete:(id /* block */)a1;
- (void)setupKTSession:(id)a0 complete:(id /* block */)a1;
- (void)updateStaticKeyDatabaseForContact:(id)a0 peerPublicAccountIdentity:(id)a1 complete:(id /* block */)a2;

@end
