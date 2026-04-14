@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (id)hostProtocolDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
