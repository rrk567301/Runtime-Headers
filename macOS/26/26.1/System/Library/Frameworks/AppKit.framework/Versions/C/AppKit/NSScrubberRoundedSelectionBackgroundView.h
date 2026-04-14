@class NSColor;

@interface NSScrubberRoundedSelectionBackgroundView : NSScrubberSelectionView

@property (copy) NSColor *tintColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)updateLayer;
- (void)_roundedBackgroundCommonInit;
- (BOOL)wantsUpdateLayer;

@end
