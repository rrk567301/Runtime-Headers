@class KHBehavior;

@interface KHBehaviorBinding : NSObject

@property (weak) id target;
@property (retain) KHBehavior *behavior;

- (void)dealloc;
- (id)condition;
- (void)evaluate;
- (void).cxx_destruct;
- (BOOL)_object:(id)a0 containsValue:(id)a1;
- (BOOL)_object:(id)a0 equalsValue:(id)a1;
- (BOOL)_object:(id)a0 greaterThan:(id)a1;
- (id)_resultFromComponentArray:(id)a0;
- (void)applyBehavior:(id)a0 forTarget:(id)a1;
- (id)initWithBehavior:(id)a0 forTarget:(id)a1;

@end
