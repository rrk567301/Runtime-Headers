@interface NUISizeCache : NSObject {
    struct nui_size_cache { void *__begin_; void *__end_; void *__cap_; } _sizeCache;
    BOOL _threadSafe;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)invalidateCache;
- (void).cxx_destruct;
- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 isSizeDependentOnPerpendicularAxis:(BOOL)a2;
- (id)initForAsynchronousAccess:(BOOL)a0;
- (void)insertSize:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
