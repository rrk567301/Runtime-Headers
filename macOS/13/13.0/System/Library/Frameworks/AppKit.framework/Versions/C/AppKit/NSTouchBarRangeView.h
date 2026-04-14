@class NSColor;

@interface NSTouchBarRangeView : NSView

@property (class, readonly) struct CGSize { double x0; double x1; } monoHandleSize;

@property (retain) NSColor *tintColor;
@property unsigned long long handleMask;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonViewSetup;
- (unsigned long long)handleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_hasLeftHandle:(BOOL *)a0 rightHandle:(BOOL *)a1;
- (struct CGSize { double x0; double x1; })fittedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_minWidthForSeparateHandles;
- (id)_coreUIDrawOptions;

@end
