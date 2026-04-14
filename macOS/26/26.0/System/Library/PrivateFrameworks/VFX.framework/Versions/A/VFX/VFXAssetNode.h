@class NSString, NSArray, VFXWorld, NSMutableArray;
@protocol VFXAsset;

@interface VFXAssetNode : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXCopyingRemappable, NSSecureCoding, VFXPresentationSupport> {
    id _asset;
    BOOL _isGroup;
    BOOL _prefab;
    NSString *_name;
    NSString *_identifier;
    VFXAssetNode *_parent;
    NSMutableArray *_children;
    VFXWorld *_world;
    unsigned char _isPresentationObject : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<VFXAsset> asset;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) VFXAssetNode *parentNode;
@property (copy, nonatomic) NSArray *childNodes;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id presentationObject;

+ (id)group;
+ (id)assetNodeWithAsset:(id)a0;

- (id)registry;
- (id)identifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)clone;
- (void)removeFromParent;
- (void)addChildNode:(id)a0;
- (void)enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)insertChildNode:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromParentNode;
- (BOOL)_childNodesPassingTest:(id /* block */)a0 recursively:(BOOL)a1 output:(id)a2;
- (id)childNodeWithName:(id)a0;
- (id)childNodesPassingTest:(id /* block */)a0 recursively:(BOOL)a1;
- (BOOL)_enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHierarchyUsingBlock:(id /* block */)a0;
- (void)setWorld:(id)a0;
- (void)_removeChild:(id)a0;
- (id)enclosingPrefab;
- (void)addWorldReference:(id)a0;
- (id)childNodeWithAssetName:(id)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initPresentation:(id)a0;
- (BOOL)isPrefab;
- (void)removeWorldReference:(id)a0;
- (id)script_instantiate:(BOOL)a0;
- (void)setupChildsArrayIfNeeded;

@end
