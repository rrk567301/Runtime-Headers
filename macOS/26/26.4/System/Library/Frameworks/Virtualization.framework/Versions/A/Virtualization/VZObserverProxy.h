@class NSObject;

@interface VZObserverProxy : NSObject {
    NSObject *_observer;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
