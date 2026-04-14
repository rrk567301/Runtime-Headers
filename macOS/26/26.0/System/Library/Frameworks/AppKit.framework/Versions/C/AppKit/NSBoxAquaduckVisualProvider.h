@interface NSBoxAquaduckVisualProvider : NSObject <NSBoxVisualProvider> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ titleTextField;
}

@property (nonatomic, weak) void /* function */ box;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (nonatomic, readonly) BOOL isFixedWidth;
@property (nonatomic, readonly) BOOL isFixedHeight;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) BOOL wantsSubviews;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (void)updateConfiguration:(struct { long long x0; unsigned long long x1; unsigned long long x2; struct CGSize { double x0; double x1; } x3; BOOL x4; })a0;
- (void).cxx_destruct;
- (void)customConfigurationDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutBackgroundSubviews;
- (void)layoutContentView;

@end
