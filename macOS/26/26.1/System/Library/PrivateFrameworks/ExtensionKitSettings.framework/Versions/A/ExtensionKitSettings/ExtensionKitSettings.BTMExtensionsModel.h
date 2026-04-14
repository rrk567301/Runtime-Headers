@interface ExtensionKitSettings.BTMExtensionsModel : NSObject <BTMListObserver> {
    void /* unknown type, empty encoding */ add;
    void /* unknown type, empty encoding */ removeAllExtensions;
    void /* unknown type, empty encoding */ markExtensionsForRemoval;
    void /* unknown type, empty encoding */ btmList;
    void /* unknown type, empty encoding */ debouncer;
}

- (void).cxx_destruct;
- (id)init;
- (void)listDidChange:(id)a0;

@end
