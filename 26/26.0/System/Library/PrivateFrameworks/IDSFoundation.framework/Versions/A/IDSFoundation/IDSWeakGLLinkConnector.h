@protocol IDSGLLinkConnector;

@interface IDSWeakGLLinkConnector : NSObject <IDSGLLinkConnector>

@property (readonly, weak) id<IDSGLLinkConnector> glLinkConnector;

- (void).cxx_destruct;
- (void)connectRelayLinkFromCandidate:(id)a0 toCandidate:(id)a1 withUniqueID:(id)a2 relaySessionID:(id)a3 glLinkProtocol:(long long)a4 replacesLinkWithUniqueID:(id)a5;
- (void)disconnectRelayLinkWithUniqueID:(id)a0 glLinkProtocol:(long long)a1;
- (id)initWithGLLinkConnector:(id)a0;
- (void)linkEngineDidRemoveLinkWithUniqueID:(id)a0;
- (void)reconnectRelayLinkWithUniqueID:(id)a0 glLinkProtocol:(long long)a1;
- (void)startNewAllocationFromInterface:(int)a0 toInterface:(int)a1;

@end
