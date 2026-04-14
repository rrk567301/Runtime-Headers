@interface SPShared.UserDefaultsObserver : NSObject {
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ monitoredKeys;
    void /* unknown type, empty encoding */ notify;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
