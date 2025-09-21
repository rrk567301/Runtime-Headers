@interface ADNormalsBuffer : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _vertices;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
