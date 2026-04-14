@interface ExtensionKitSettings.EKExtensionModel : NSObject <LSObserverDelegate> {
    void /* unknown type, empty encoding */ add;
    void /* unknown type, empty encoding */ removeAllExtensions;
    void /* unknown type, empty encoding */ markExtensionsForRemoval;
    void /* unknown type, empty encoding */ lsObserver;
    void /* unknown type, empty encoding */ debouncer;
}

- (void)observerDidObserveDatabaseChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
