@class NSString, NSOrderedSet, NSHashTable, FBScene;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSOrderedSet *_fbsLayers;
    NSHashTable *_suspendAssertions;
    NSHashTable *_observers;
    BOOL _needsRebuildLayers;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)add:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)remove:(id)a0;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_didStartTrackingLayers;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (void)_removeSuspendAssertion:(id)a0;
- (id)_initWithScene:(id)a0;
- (void)_setLayers:(id)a0;
- (id)layerWithContextID:(unsigned int)a0;
- (void)_rebuildLayers;
- (void).cxx_destruct;
- (id)_suspendUpdatesWithReason:(id)a0;
- (void)removeObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_objc_initiateDealloc;
- (void)addObserver:(id)a0;

@end
