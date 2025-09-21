@interface SKSetupCaptiveNetworkJoinClient : SKSetupBase {
    BOOL _captiveNetworkLoginDone;
    BOOL _captiveNetworkProbingSuccess;
}

- (void)_run;
- (void)_invalidate;
- (id)init;
- (void)_postEvent:(id)a0;
- (void)_captiveProbeRequest;
- (void)_captiveProbeResponse:(id)a0;

@end
