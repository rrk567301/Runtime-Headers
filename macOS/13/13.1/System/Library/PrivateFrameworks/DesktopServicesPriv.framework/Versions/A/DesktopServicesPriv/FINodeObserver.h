@class FINode;

@interface FINodeObserver : NSObject {
    FINode *_observedNode;
    struct OpaqueEventNotifier { } *_notifier;
}

+ (id)observerForFINode:(id)a0 withObserver:(id)a1;
+ (id)propertyName:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startObserving:(unsigned int)a0;
- (void)stopObserving:(unsigned int)a0;

@end
