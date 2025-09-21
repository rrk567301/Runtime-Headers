@class NSString, NSArray;
@protocol MTLTexture, MTLBuffer;

@interface VFX.EntityPropertyHelper : NSObject {
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ entity;
}

@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) id opaqueEntityManager;
@property (nonatomic, readonly) BOOL isNull;
@property (nonatomic, copy) NSString *clientTextureIdentifier;
@property (nonatomic, retain) id<MTLTexture> clientTexture;
@property (nonatomic, retain) struct CGImage { } *clientCGImage;
@property (nonatomic, readonly) long long bindingTimestamp;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, readonly) NSArray *intersectionFunctions;
@property (nonatomic, readonly) id<MTLBuffer> particleHeaderBuffer;
@property (nonatomic, readonly) long long particleHeaderBufferOffset;
@property (nonatomic, readonly) id<MTLBuffer> particleDataBuffer;
@property (nonatomic, readonly) long long particleDataBufferOffset;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic, retain) struct __CFXNode { } *simulationAnchor;
@property (nonatomic) float opacity;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) struct { } orientation;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic, copy) NSString *absolutePath;
@property (nonatomic, readonly) BOOL areParticlesSimulatedInWorldSpace;
@property (nonatomic, readonly) BOOL hasParticleEmitterComponent;
@property (nonatomic, readonly) BOOL hasParticleColliderComponent;

- (void)restart;
- (id)init;
- (void).cxx_destruct;
- (void)killParticles;
- (BOOL)_setValue:(id)a0 forKeyPath:(id)a1;
- (id)_valueForKeyPath:(id)a0 world:(id)a1;
- (id)buildAccelerationStructureDescriptors;
- (void)setBeamed;
- (void)setSimulationRate:(float)a0;
- (void)updateAssociatedEntityWithTag:(id)a0;

@end
