@interface NSPFallbackProxyPath : NSPProxyPath

- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (void)setupMultiHopProxyRegistrations;
- (void)resetMultiHopProxyAgent;
- (void)resetObliviousHopProxyAgents;
- (void)resetSingleHopProxyAgent;
- (void)setupSingleHopProxyRegistrations;

@end
