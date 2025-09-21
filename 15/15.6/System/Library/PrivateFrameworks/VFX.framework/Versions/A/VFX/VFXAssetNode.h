@class NSString, NSArray, VFXAssetRegistry, NSMutableArray;
@protocol VFXAsset;

@interface VFXAssetNode : NSObject <NSSecureCoding> {
    id _asset;
    char _isGroup;
    char _prefab;
    NSString *_name;
    VFXAssetNode *_parent;
    NSMutableArray *_children;
    VFXAssetRegistry *_registry;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<VFXAsset> asset;
@property (readonly, nonatomic, getter=isGroup) char group;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) VFXAssetNode *parentNode;
@property (copy, nonatomic) NSArray *childNodes;

+ (id)group;
+ (id)assetNodeWithAsset:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clone;
- (void)removeFromParent;
- (id)registry;
- (void)addChildNode:(id)a0;
- (void)enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)insertChildNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)childNodeWithName:(id)a0;
- (char)_enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHierarchyUsingBlock:(id /* block */)a0;
- (void)setRegistry:(id)a0;
- (void)_removeChild:(id)a0;
- (id)enclosingPrefab;
- (id)childNodeWithAssetName:(id)a0;
- (char)isPrefab;
- (void)setupChildsArrayIfNeeded;

@end
