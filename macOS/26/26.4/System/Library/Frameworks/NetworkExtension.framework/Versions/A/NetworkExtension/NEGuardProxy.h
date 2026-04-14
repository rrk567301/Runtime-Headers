@class NEPolicySession, NSMutableArray, NEFlowDivertFileHandle;

@interface NEGuardProxy : NEAppProxyProviderContainer {
    BOOL _started;
    NEFlowDivertFileHandle *_flowDivertControlHandle;
    NEPolicySession *_session;
    NSMutableArray *_policyIDs;
}

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
