@class HKObserverBridge;

@interface HKObserverBridgeHandle : NSObject

@property (readonly, weak, nonatomic) HKObserverBridge *bridge;

- (BOOL)notifyObserversOfChangeForKey:(id)a0 newValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithBridge:(id)a0;

@end
