@interface PHASETriangleSet : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } verts;
}

@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ color;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTriangleData:(SEL)a0 color:(id)a1;
- (void /* unknown type, empty encoding */)pointAtIndex:(long long)a0 vertexIndex:(long long)a1;

@end
