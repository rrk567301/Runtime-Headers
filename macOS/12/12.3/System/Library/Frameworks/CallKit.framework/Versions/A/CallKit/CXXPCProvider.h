@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)hostProtocolDelegate;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
