@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView {
    id _parentView;
}

@property (weak) NSTouchBarRangeView *parentView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_commonViewSetup;
- (id)_coreUIDrawOptions;
- (BOOL)wantsUpdateLayer;

@end
