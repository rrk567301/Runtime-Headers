@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (id)hostProtocolDelegate;
- (void)dealloc;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
