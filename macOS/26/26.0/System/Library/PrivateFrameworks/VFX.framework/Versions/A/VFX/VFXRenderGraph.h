@class NSArray, VFXWorld, NSString, NSData;

@interface VFXRenderGraph : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSCopying, NSSecureCoding, VFXAsset> {
    id _authoringGraph;
    id _runtimeAuthoringGraphCopy;
    id _graph;
    id _diagnostics;
    NSString *_name;
    unsigned char _isPresentationObject : 1;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    NSData *_deferredLoadingData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;

+ (id)renderGraphDescriptionWithSCNTechniqueDescription:(id)a0;

- (id)graph;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)diagnostics;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setWorld:(id)a0;
- (void)_compileRenderGraphIfNeeded;
- (void)addWorldReference:(id)a0;
- (id)authoringGraph;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)finishLoadingWithSerializationContext:(id)a0;
- (void)invalidateCompiledGraph;
- (void)prepareForLoad;
- (void)removeWorldReference:(id)a0;
- (void)setAuthoringGraph:(id)a0;

@end
