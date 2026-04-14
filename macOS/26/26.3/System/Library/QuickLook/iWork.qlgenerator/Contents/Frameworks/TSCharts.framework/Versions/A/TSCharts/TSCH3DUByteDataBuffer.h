@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _container;
}

@property (readonly, nonatomic) void *container;

- (unsigned long long)count;
- (unsigned long long)components;
- (void)clear;
- (const void *)data;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (int)componentType;
- (id).cxx_construct;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
