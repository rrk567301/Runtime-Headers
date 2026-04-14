@interface _EXDiscoveryController : NSObject <LSObserverDelegate> {
    void /* unknown type, empty encoding */ activeQueries;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ settingsStoreToken;
    void /* unknown type, empty encoding */ activeQueriesLock;
    void /* unknown type, empty encoding */ queryQueue;
}

@property (class, nonatomic, readonly) _EXDiscoveryController *sharedInstance;

- (id)init;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (void).cxx_destruct;

@end
