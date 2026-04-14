@class NSKeyValueProperty, NSObject;

@interface NSKeyValueObservance : NSObject {
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    union { NSObject *originalObservable; NSObject *unownedObserver; } _originalObservableOrUnownedObserver;
    unsigned char _observerIsWeak : 1;
    unsigned char _originalObservableIsWeak : 1;
    unsigned char _observerSupportsWeak : 1;
    unsigned char _originalObservableSupportsWeak : 1;
    unsigned char _options : 4;
    unsigned char _isObservedByAnObservance : 1;
    unsigned char _cachedIsShareable : 1;
    unsigned char _isInternalObservationHelper : 1;
}

- (unsigned long long)hash;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_initWithObserver:(id)a0 property:(id)a1 options:(unsigned long long)a2 context:(void *)a3 originalObservable:(id)a4;

@end
