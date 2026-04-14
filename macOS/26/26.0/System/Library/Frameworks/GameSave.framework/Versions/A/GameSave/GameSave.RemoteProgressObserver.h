@interface GameSave.RemoteProgressObserver : NSObject {
    void /* unknown type, empty encoding */ remoteProgress;
    void /* unknown type, empty encoding */ localProgress;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
