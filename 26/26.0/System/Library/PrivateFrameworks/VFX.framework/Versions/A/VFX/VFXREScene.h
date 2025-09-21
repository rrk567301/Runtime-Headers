@class _TtC3VFX9VFXEffect, _TtC3VFX8VFXScene;

@interface VFXREScene : NSObject {
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ cameraEntity;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ isPrepared;
    void /* unknown type, empty encoding */ worldFromScene;
    void /* unknown type, empty encoding */ sceneFromWorld;
    void /* function */ reloadBlock;
    void /* unknown type, empty encoding */ remappingTable;
    void /* unknown type, empty encoding */ renderOutput;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ externalDrawCallQuery;
}

@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic, retain) id transientDrawCall;
@property (nonatomic) long long uuid;
@property (nonatomic) float sceneScale;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, readonly) void *opaqueECS;
@property (nonatomic, readonly) float deltaTime;
@property (nonatomic) int peerPid;
@property (nonatomic) unsigned int peerTaskIdentity;
@property (nonatomic, readonly) long long drawCallCount;
@property (nonatomic, readonly) struct { void /* unknown type, empty encoding */ x0[2]; } worldBoundingBox;
@property (nonatomic, readonly) BOOL shouldUseDrawCallHandler;
@property (nonatomic, readonly) BOOL needsCollisionPlanes;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)tick;
- (void)setClientTextureWithId:(long long)a0 texture:(id)a1;
- (long long)fetchClientTextureIDWithNamed:(id)a0;
- (long long)addCollisionPlaneWithExtents:(SEL)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)collideOutsidePlaneWithId:(long long)a0;
- (id)initWithCommandQueue:(id)a0 model:(id)a1 options:(id)a2;
- (id)initWithContentsOf:(id)a0 commandQueue:(id)a1 options:(id)a2 error:(id *)a3;
- (id /* block */)recycleBuffersGetCompletion;
- (void)removeCollisionPlaneWithId:(long long)a0;
- (void)setCameraEntityTransformProjection:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2 :(void /* unknown type, empty encoding */)a3 :(void /* unknown type, empty encoding */)a4 :(void /* unknown type, empty encoding */)a5 :(void /* unknown type, empty encoding */)a6;
- (void)setFrameConfigurationWithImmersiveEnvironmentCurves:(SEL)a0;
- (void)setRootTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)setSceneTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)tickWithDeltaTime:(double)a0;
- (void)updateCollisionPlaneWithId:(SEL)a0 extents:(long long)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (void)updateMemoryOwnership;
- (id)REMeshAssetBindings;
- (long long)addCollisionPlaneWithCenter:(id)a0 extents:(SEL)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (void)copyBindingValueWithObjectName:(id)a0 bindingName:(id)a1 action:(long long)a2 storageGetterBlock:(id /* block */)a3;
- (id)createREMeshDataBinding;
- (id)generateMaterialsAndReturnError:(id *)a0;
- (id)getREMeshAssetPath:(id)a0;
- (id)neededModelsAndReturnError:(id *)a0;
- (void)setREMeshDataBinding:(id)a0 positionData:(id)a1 normalData:(id)a2 colorData:(id)a3;
- (void)setRootEntityTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)tickWithCommandBuffer:(id)a0;
- (void)tickWithDeltaTime:(double)a0 commandBuffer:(id)a1;
- (void)updateCollisionPlaneWithId:(id)a0 center:(SEL)a1 extents:(long long)a2 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;

@end
