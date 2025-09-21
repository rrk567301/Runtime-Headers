@class FBSceneManager, NSString, FBScene, FBSSceneIdentityToken, FBSMutableSceneSettings, FBSSceneClientSettingsDiffInspector, FBSceneMonitorBehaviors, NSMutableSet;
@protocol FBSceneMonitorDelegate;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver> {
    FBSceneManager *_sceneManager;
    FBSSceneIdentityToken *_identityToken;
    NSMutableSet *_externalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSceneMonitorBehaviors *_delegateMonitorBehaviors;
    FBSceneMonitorBehaviors *_effectiveMonitorBehaviors;
    char _invalidated;
    char _isSynchronizing;
    char _updateSettingsAfterSync;
    char _updateExternalScenesAfterSync;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) id<FBSceneMonitorDelegate> delegate;
@property (copy, nonatomic) FBSceneMonitorBehaviors *behaviors;
@property (readonly, nonatomic) FBSMutableSceneSettings *sceneSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithScene:(id)a0;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (id)_effectiveBehaviors;
- (void)_evaluateEffectiveMonitorBehaviors;
- (id)_initWithSceneManager:(id)a0 sceneID:(id)a1;
- (void)_setEffectiveMonitorBehaviors:(id)a0;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateExternalScenes:(char)a0;
- (void)_updateScenePairingState:(char)a0;
- (void)_updateSceneSettings:(char)a0;
- (id)initWithSceneID:(id)a0;
- (char)isPairedWithExternalSceneID:(id)a0;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)a0;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)a0;

@end
