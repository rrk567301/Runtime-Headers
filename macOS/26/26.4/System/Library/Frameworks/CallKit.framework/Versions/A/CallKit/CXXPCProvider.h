@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)hostProtocolDelegate;
- (void)dealloc;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
