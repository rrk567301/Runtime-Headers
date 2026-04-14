@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void)invalidate;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
