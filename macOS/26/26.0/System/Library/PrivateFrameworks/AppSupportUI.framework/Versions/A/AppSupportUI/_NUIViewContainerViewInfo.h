@interface _NUIViewContainerViewInfo : NSObject {
    struct nui_size_cache { void *__begin_; void *__end_; void *__cap_; } _sizeCache;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _maxSize;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _alignmentInsets;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _cachedAlignmentInsets;
    struct { double baseLineFromTop; double baseLineFromBottom; } _baselines;
    struct { unsigned char neverCacheLayoutSize : 1; unsigned char shouldCacheLayoutSize : 1; unsigned char alsoInvalidateSuperview : 1; unsigned char cachedAlignmentInsetsAreValid : 1; unsigned char topBaselineIsCustom : 1; unsigned char bottomBaselineIsCustom : 1; } _flags;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
