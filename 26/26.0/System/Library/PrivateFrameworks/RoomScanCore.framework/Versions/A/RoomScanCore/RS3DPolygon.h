@interface RS3DPolygon : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _polygonPoints;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void *points;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
