@interface ExtensionFoundation.LocalLSDatabaseObserver : NSObject <LSObserverDelegate> {
    void /* unknown type, empty encoding */ lsObserver;
    void /* unknown type, empty encoding */ settingsStoreToken;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ observersLock;
    void /* unknown type, empty encoding */ observers;
}

- (id)init;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (void).cxx_destruct;

@end
