@interface TSCH3Dvec1DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec1<float>, std::allocator<glm::detail::tvec1<float>>> { void *__begin_; void *__end_; void *__cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (unsigned long long)components;
- (void)clear;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (const void *)data;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
