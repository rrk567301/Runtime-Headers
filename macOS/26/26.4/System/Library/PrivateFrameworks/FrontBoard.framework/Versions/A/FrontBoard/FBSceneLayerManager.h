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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_observer_didStopTrackingLayers;
- (id)succinctDescriptionBuilder;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (id)_suspendUpdatesWithReason:(id)a0;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_rebuildLayers;
- (void)removeObserver:(id)a0;
- (void)_removeSuspendAssertion:(id)a0;
- (id)_initWithScene:(id)a0;
- (id)layerWithContextID:(unsigned int)a0;
- (void)_setLayers:(id)a0;
- (void)_objc_initiateDealloc;
- (void)_observer_didStartTrackingLayers;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;

@end
