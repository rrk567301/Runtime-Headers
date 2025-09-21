@interface AppStoreKit.AppUpdatesDataSource : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ consistencyLock;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ updatesQuery;
    void /* unknown type, empty encoding */ lastServerReloadTime;
    void /* unknown type, empty encoding */ lockupsListeners;
    void /* unknown type, empty encoding */ countsListeners;
    void /* unknown type, empty encoding */ adamIdToCachedAppLockupPair;
    void /* unknown type, empty encoding */ isFetching;
    void /* unknown type, empty encoding */ queryResultsDidChange;
}

- (id)init;
- (void).cxx_destruct;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;

@end
