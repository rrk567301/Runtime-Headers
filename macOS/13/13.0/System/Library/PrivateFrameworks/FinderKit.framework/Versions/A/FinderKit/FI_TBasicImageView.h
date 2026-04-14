@class NSImage, NSString, NSArray;

@interface FI_TBasicImageView : FI_TUpdateLayerView <NSAccessibilityImage> {
    NSImage *_imageForDrawing;
    NSImage *_imageForComparison;
    NSArray *_dimmedFilters;
    struct TriStateBool { unsigned char fState; } _animatingFrameSizeLarger;
    unsigned long long _animatingFrameSizeCount;
}

@property (retain, nonatomic) NSImage *image;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL acceptsFirstMouse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;
- (BOOL)accessibilityEnabled;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)initCommon;
- (void)updateImageSize:(const struct CGSize { double x0; double x1; } *)a0 forceRedraw:(BOOL)a1;
- (BOOL)pointInOpaquePixels:(const struct CGPoint { double x0; double x1; } *)a0;
- (BOOL)intersectsOpaquePixels:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)setFrameOrBoundsSizeHelper:(const struct CGSize { double x0; double x1; } *)a0 oldSize:(const struct CGSize { double x0; double x1; } *)a1 sizeChangerBlock:(const void *)a2;
- (void)_setSuperBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setSuperFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)dimmedFilters;

@end
