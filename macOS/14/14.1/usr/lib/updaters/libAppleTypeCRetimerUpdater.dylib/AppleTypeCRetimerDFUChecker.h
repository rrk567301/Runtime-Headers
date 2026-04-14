@class NSLock, NSMutableArray;

@interface AppleTypeCRetimerDFUChecker : AppleTypeCRetimerUpdaterHelper {
    BOOL _forceDFU;
    NSMutableArray *_notReadyRouterIDs;
    NSLock *_notReadyRouterIDsLock;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)doCheck;
- (BOOL)checkDeferredRouterIDs;
- (BOOL)doCheckForRouterID:(unsigned char)a0 allowsNotReady:(BOOL)a1;
- (BOOL)doCheckForRouterIDList:(id)a0 allowsNotReady:(BOOL)a1;
- (void)initForceDFU;
- (BOOL)waitForACEsWithRouterIDs:(id)a0;

@end
