@class HKObserverBridgeHandle;

@interface _HKUserDefaultsBridgedObserver : NSObject

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;

@end
