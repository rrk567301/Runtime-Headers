@class NSString, NSMutableArray, NSLock;

@interface AppleTypeCRetimerDFUChecker : AppleTypeCRetimerUpdaterHelper {
    char _forceDFU;
    NSString *_deviceNamePrefix;
    NSMutableArray *_notReadyRouterIDs;
    NSLock *_notReadyRouterIDsLock;
}

- (void).cxx_destruct;
- (char)doCheck;
- (char)checkDeferredRouterIDs;
- (char)doCheckForRouterID:(unsigned char)a0 allowsNotReady:(char)a1;
- (char)doCheckForRouterIDList:(id)a0 allowsNotReady:(char)a1;
- (void)initForceDFU;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 deviceNamePrefix:(id)a3;
- (char)waitForACEsWithRouterIDs:(id)a0;

@end
