@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>> { void *__begin_; void *__end_; void *__cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (unsigned long long)count;
- (int)componentType;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)data;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
