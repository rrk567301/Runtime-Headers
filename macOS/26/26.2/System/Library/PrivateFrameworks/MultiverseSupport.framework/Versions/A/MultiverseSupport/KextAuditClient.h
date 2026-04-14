@class KextAuditIntelBootSession, NSXPCConnection;
@protocol KextAuditXPCClientProtocol;

@interface KextAuditClient : NSObject

@property (retain) NSXPCConnection<KextAuditXPCClientProtocol> *xpcConnection;
@property (retain) KextAuditIntelBootSession *session;

+ (id)client;

- (void).cxx_destruct;
- (int)initializeConnection;
- (id)init;
- (void)newBootSession:(id)a0;
- (void)invalidateBootSession:(id)a0;
- (void)kextLoad:(id)a0;
- (id)updateSession;

@end
