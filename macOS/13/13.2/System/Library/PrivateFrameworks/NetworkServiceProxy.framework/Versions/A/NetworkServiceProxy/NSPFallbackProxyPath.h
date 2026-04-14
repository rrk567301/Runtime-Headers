@interface NSPFallbackProxyPath : NSPProxyPath

- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;
- (void)resetObliviousHopProxyAgents;
- (void)resetMultiHopProxyAgent;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;

@end
