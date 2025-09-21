@class NSArray, NSIndexPath, VNContoursObservation;

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding> {
    VNContoursObservation *_observation;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; void *__cap_; } _contourPoints;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pathLock;
    struct CGPath { } *_normalizedPath;
}

@property (readonly) unsigned long long topLevelIndex;
@property (readonly) NSIndexPath *indexPath;
@property (readonly) long long childContourCount;
@property (readonly) NSArray *childContours;
@property (readonly) long long pointCount;
@property (readonly) const void *normalizedPoints;
@property (readonly) struct CGPath { } *normalizedPath;
@property (readonly) float aspectRatio;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (id)debugQuickLookObject;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)aspectRatioInOrientation:(unsigned int)a0;
- (id)childContourAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)initWithPoints:(const void *)a0 pointCount:(long long)a1 aspectRatio:(float)a2;
- (id)initWithPoints:(const void *)a0 topLevelIndex:(unsigned long long)a1 indexPath:(id)a2 aspectRatio:(float)a3;
- (struct CGPath { } *)normalizedPathInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (const void *)normalizedPointsInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (id)polygonApproximationWithEpsilon:(float)a0 error:(id *)a1;

@end
