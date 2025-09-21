@interface Sharing.SFUserDefaultObserver : NSObject {
    void /* unknown type, empty encoding */ defaultChangedHandler;
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ key;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
