@class NSMapTable;

@interface AVBehaviorStorage : NSObject

@property (weak, nonatomic) id AVKitOwner;
@property (readonly, nonatomic) NSMapTable *behaviorsAndBehaviorContexts;

- (void).cxx_destruct;
- (id)behaviors;
- (id)initWithAVKitOwner:(id)a0;
- (void)enumerateAllBehaviorsUsingBlock:(id /* block */)a0;
- (void)enumerateAllBehaviorContextsUsingBlock:(id /* block */)a0;
- (void)enumerateAllBehaviorContextsConformingToProtocol:(id)a0 usingBlock:(id /* block */)a1;
- (void)addBehavior:(id)a0;
- (void)removeBehavior:(id)a0;
- (void)enumerateAllBehaviorsConformingToProtocol:(id)a0 usingBlock:(id /* block */)a1;
- (id)behaviorOfClass:(Class)a0;
- (void)enumerateAllBehaviorContextsImplementingSelector:(SEL)a0 forProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (id)behaviorContextOfClass:(Class)a0;

@end
