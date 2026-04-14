@interface RSMajorViewInfo : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _major_convex_hull;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _major_convex_hull_buffer;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _major_view_line;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _major_views;
}

@property (readonly, nonatomic) const void *major_convex_hull;
@property (readonly, nonatomic) unsigned long long sz_major_convex_hull;
@property (readonly, nonatomic) const void *major_convex_hull_buffer;
@property (readonly, nonatomic) unsigned long long sz_major_convex_hull_buffer;
@property (readonly, nonatomic) const void *major_view_line;
@property (readonly, nonatomic) unsigned long long sz_major_view_line;
@property (readonly, nonatomic) const void *major_views;
@property (readonly, nonatomic) unsigned long long sz_major_views;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (void)reset;
- (id)dictionaryRepresentation;
- (void)assignMajorConvexHull:(const void *)a0 withSize:(unsigned long long)a1;
- (void)apppendMajorConvexHull:(SEL)a0;
- (void)cleanMajorConvexHull;
- (void)assignMajorConvexHullBuffer:(const void *)a0 withSize:(unsigned long long)a1;
- (void)apppendMajorConvexHullBuffer:(SEL)a0;
- (void)cleanMajorConvexHullBuffer;
- (void)assignMajorViewLine:(const void *)a0 withSize:(unsigned long long)a1;
- (void)apppendMajorViewLine:(SEL)a0;
- (void)cleanMajorViewLine;
- (void)assignMajorViews:(const void *)a0 withSize:(unsigned long long)a1;
- (void)apppendMajorViews:(SEL)a0;
- (void)cleanMajorViews;

@end
