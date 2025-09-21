@interface ExtensionKitSettings.BTMExtensionsModel : NSObject <BTMListObserver> {
    void /* unknown type, empty encoding */ add;
    void /* unknown type, empty encoding */ removeAllExtensions;
    void /* unknown type, empty encoding */ markExtensionsForRemoval;
    void /* unknown type, empty encoding */ btmList;
    void /* unknown type, empty encoding */ debouncer;
}

- (id)init;
- (void).cxx_destruct;
- (void)listDidChange:(id)a0;

@end
