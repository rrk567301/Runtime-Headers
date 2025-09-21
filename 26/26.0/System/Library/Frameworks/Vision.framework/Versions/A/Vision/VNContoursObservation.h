@class NSArray, NSData;

@interface VNContoursObservation : VNObservation {
    NSData *_compressedPoints;
    struct CGSize { double width; double height; } _imageSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pathLock;
    struct CGPath { } *_normalizedPath;
    struct shared_ptr<apple::vision::libraries::autotrace::EPolygonList> { struct EPolygonList *__ptr_; struct __shared_weak_count *__cntrl_; } _polygonList;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _topLevelContoursIndices;
    struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *__begin_; void *__end_; void *__cap_; } _contourChildrenIndices;
}

@property (readonly) long long contourCount;
@property (readonly) long long topLevelContourCount;
@property (readonly) NSArray *topLevelContours;
@property (readonly) struct CGPath { } *normalizedPath;

+ (BOOL)supportsSecureCoding;

- (id)debugQuickLookObject;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginatingRequestSpecifier:(id)a0 compressedPoints:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_initializePolygonContainers;
- (const void *)childContourIndicesAtIndex:(long long)a0;
- (id)contourAtIndex:(long long)a0 error:(id *)a1;
- (id)contourAtIndexPath:(id)a0 error:(id *)a1;
- (struct CGPath { } *)normalizedPathInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (const struct EPolygonList { int x0; int x1; struct EPolygon *x2; int x3; } *)polygonList;
- (id)vn_cloneObject;

@end
