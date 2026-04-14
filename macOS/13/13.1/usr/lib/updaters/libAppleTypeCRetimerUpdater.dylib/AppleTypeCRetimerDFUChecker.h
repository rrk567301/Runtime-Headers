@interface AppleTypeCRetimerDFUChecker : AppleTypeCRetimerUpdaterHelper {
    BOOL _forceDFU;
}

- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (void)initForceDFU;
- (BOOL)doCheck;
- (BOOL)doCheckForRouterID:(unsigned char)a0;
- (BOOL)waitForACEsWithRouterIDs:(id)a0;

@end
