@interface SPShared.UserDefaultsObserver : NSObject {
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ monitoredKeys;
    void /* unknown type, empty encoding */ notify;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
