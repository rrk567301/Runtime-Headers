@class NSMutableDictionary, _CDClientContext;

@interface PPAppLaunchMonitorGuardedData : NSObject {
    NSMutableDictionary *handlers;
    unsigned long long nextToken;
    char isRegistered;
    _CDClientContext *clientContext;
}

- (void).cxx_destruct;

@end
