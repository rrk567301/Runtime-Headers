@class NSArray;

@interface _TtC8GesturesP33_A53607C86F339F8E27637A5709BD2DC526GestureNodeCoordinatorShim : NSObject <GFGestureNodeCoordinator> {
    void /* unknown type, empty encoding */ coordinator;
    void /* function */ willUpdateHandler;
    void /* function */ willProcessUpdateQueueHandler;
    void /* function */ didUpdateHandler;
}

@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, copy) id /* block */ willUpdateHandler;
@property (nonatomic, copy) id /* block */ willProcessUpdateQueueHandler;
@property (nonatomic, copy) id /* block */ didUpdateHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasUnresolvedFailureDependenciesForNode:(id)a0;
- (void)updateWithNodes:(id)a0 reason:(id)a1 updateHandler:(id /* block */)a2;
- (void)enqueueUpdatesForNodes:(id)a0 inBlock:(id /* block */)a1 reason:(id)a2;
- (id)failureDependentsForNode:(id)a0;
- (void)processUpdatesWithReason:(id)a0;

@end
