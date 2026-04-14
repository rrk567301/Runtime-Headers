@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct { char *__cap_; } ; } _container;
}

@property (readonly, nonatomic) void *container;

- (int)componentType;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (const void *)data;
- (void *)mutableData;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0;
- (void)resizeFillDimension:(const void *)a0;

@end
