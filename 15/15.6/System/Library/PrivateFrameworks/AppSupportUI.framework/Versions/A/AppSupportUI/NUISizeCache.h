@interface NUISizeCache : NSObject {
    struct nui_size_cache { void *__begin_; void *__end_; struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { void *__value_; } __end_cap_; } _sizeCache;
    char _threadSafe;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidateCache;
- (char)getSize:(struct CGSize { double x0; double x1; } *)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 isSizeDependentOnPerpendicularAxis:(char)a2;
- (id)initForAsynchronousAccess:(char)a0;
- (void)insertSize:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
