@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; char *__cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (unsigned long long)count;
- (int)componentType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)data;
- (void *)mutableData;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0;
- (void)resizeFillDimension:(const void *)a0;

@end
