@class KextAuditIntelBootSession, NSXPCConnection;
@protocol KextAuditXPCClientProtocol;

@interface KextAuditClient : NSObject

@property (retain) NSXPCConnection<KextAuditXPCClientProtocol> *xpcConnection;
@property (retain) KextAuditIntelBootSession *session;

+ (id)client;

- (id)init;
- (int)initializeConnection;
- (void).cxx_destruct;
- (void)newBootSession:(id)a0;
- (void)invalidateBootSession:(id)a0;
- (void)kextLoad:(id)a0;
- (id)updateSession;

@end
