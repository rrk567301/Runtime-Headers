@interface _EXServiceClient : NSObject {
    void /* unknown type, empty encoding */ connectionLock;
    void /* unknown type, empty encoding */ _discoveryConnection;
    void /* unknown type, empty encoding */ _observerConnection;
    void /* unknown type, empty encoding */ _tccProxyConnection;
    void /* unknown type, empty encoding */ _launchConnection;
    void /* unknown type, empty encoding */ activeQueries;
    void /* unknown type, empty encoding */ activeQueriesLock;
    void /* unknown type, empty encoding */ activeObservers;
    void /* unknown type, empty encoding */ activeObserversLock;
    void /* unknown type, empty encoding */ notifyQueue;
}

@property (class, nonatomic, readonly) _EXServiceClient *sharedInstance;

- (void)dealloc;
- (BOOL)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
