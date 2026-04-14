@protocol NSPQUICProxyPathDelegate;

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) id<NSPQUICProxyPathDelegate> quicProxyPathDelegate;

- (void).cxx_destruct;
- (void)resetSingleHopProxyAgent;
- (void)resetMultiHopProxyAgent;
- (id)initWithDelegate:(id)a0 ingressProxy:(id)a1 egressProxy:(id)a2 proxyPathWeight:(unsigned long long)a3 allowFallback:(BOOL)a4 fallbackToQUIC:(BOOL)a5 forceFallback:(BOOL)a6 allowFailOpen:(BOOL)a7 geohashSharingEnabled:(BOOL)a8 networkCharacteristics:(id)a9;
- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (void)enableFallback:(BOOL)a0;

@end
