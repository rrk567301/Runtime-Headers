@class PHASEEngine, NSArray;

@interface PHASEShape : NSObject <NSCopying> {
    struct MdlMeshAsset { unsigned int mType; struct unique_ptr<Phase::details::MdlMeshAssetImplementation, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { struct MdlMeshAssetImplementation *__ptr_; } mpImplementation; } _meshAsset;
    int _voxelDensity;
    unsigned long long _flags;
    BOOL _isReal;
    struct vector<Phase::LocalizedGeometryPermutation, std::allocator<Phase::LocalizedGeometryPermutation>> { struct LocalizedGeometryPermutation *__begin_; struct LocalizedGeometryPermutation *__end_; struct LocalizedGeometryPermutation *__cap_; } _localizedGeometryPermutations;
}

@property (weak, nonatomic) PHASEEngine *engine;
@property (readonly, copy, nonatomic) NSArray *elements;

+ (id)new;

- (id).cxx_construct;
- (id)initWithShape:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dumpState;
- (id)init;
- (void)applyOptions:(id)a0;
- (void)buildLocalizedGeometryPermutations;
- (id)geoShapeHandlesForEntityType:(unsigned int)a0;
- (id)initWithEngine:(id)a0 mesh:(id)a1;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2 options:(id)a3;
- (id)initWithEngine:(id)a0 mesh:(id)a1 options:(id)a2;
- (void)updateMaterialForElement:(id)a0;
- (void)updateMaterialForShape:(struct Handle64 { unsigned long long x0; })a0 fromElementIndex:(unsigned long long)a1;

@end
