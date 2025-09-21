@interface MDLBufferViewAllocator : NSObject <NSSecureCoding> {
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> { struct __IOSurface **__begin_; struct __IOSurface **__end_; struct __IOSurface **__cap_; } _sharedRegions;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; unsigned long long __cap_; } _owned;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; long long *__cap_; } _regionIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __IOSurface { } *)_regionAtIndex:(long long)a0;
- (void)encodeBuffers:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (struct __IOSurface { } *)_regionAtIndex:(long long)a0 length:(long long)a1 offset:(long long)a2;
- (id)decodeBufferWithCoder:(id)a0 forKey:(id)a1;
- (id)decodeBuffersWithCoder:(id)a0 forKey:(id)a1;
- (void)encodeBuffer:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (id)initWithSharedRegionsNoCopy:(id)a0;
- (id)newBufferViewAtRegionIndex:(long long)a0;
- (id)newBufferViewAtRegionIndex:(long long)a0 length:(long long)a1 offset:(long long)a2;

@end
