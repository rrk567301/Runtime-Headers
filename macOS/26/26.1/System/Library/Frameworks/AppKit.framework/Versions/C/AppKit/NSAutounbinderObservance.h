@class NSString, NSObject;

@interface NSAutounbinderObservance : NSObject {
    NSObject *_observer;
    NSString *_keyPath;
    void *_context;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)description;
- (void)dealloc;
- (id)initWithObserver:(id)a0 keyPath:(id)a1 context:(void *)a2;

@end
