@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>> { void *__begin_; void *__end_; void *__cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)data;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
