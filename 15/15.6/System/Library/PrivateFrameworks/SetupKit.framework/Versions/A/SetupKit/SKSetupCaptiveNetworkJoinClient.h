@interface SKSetupCaptiveNetworkJoinClient : SKSetupBase {
    char _captiveNetworkLoginDone;
    char _captiveNetworkProbingSuccess;
}

- (id)init;
- (void)_invalidate;
- (void)_run;
- (void)_postEvent:(id)a0;
- (void)_captiveProbeRequest;
- (void)_captiveProbeResponse:(id)a0;

@end
