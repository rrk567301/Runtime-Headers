@class NSMutableArray, NSMutableDictionary;

@interface RSTemporalMeta : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _incrementalPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _coveringHullPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _boundaryPoints;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct { struct *__cap_; } ; } _incrementalPoses;
    BOOL _isUpdate;
    NSMutableArray *_incrementalIds;
    NSMutableDictionary *_mappingInterval;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
