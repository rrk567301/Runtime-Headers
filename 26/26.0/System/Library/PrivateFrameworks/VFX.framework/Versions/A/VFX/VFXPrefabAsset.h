@class VFXNode, VFXWorld, NSString;

@interface VFXPrefabAsset : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXCopyingRemappable, VFXAsset, NSSecureCoding> {
    VFXNode *_node;
    VFXWorld *_world;
    unsigned char _isPresentationObject : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXNode *node;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;

+ (id)prefabWithNode:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setWorld:(id)a0;
- (void)addWorldReference:(id)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)didAttachToWorld:(id)a0;
- (void)didDetachFromWorld:(id)a0;
- (void)disableEntities:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)instantiate:(BOOL)a0;
- (void)removeWorldReference:(id)a0;

@end
