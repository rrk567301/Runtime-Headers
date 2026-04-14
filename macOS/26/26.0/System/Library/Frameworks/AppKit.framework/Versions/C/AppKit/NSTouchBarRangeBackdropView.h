@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView {
    id _parentView;
}

@property (weak) NSTouchBarRangeView *parentView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_commonViewSetup;
- (id)_coreUIDrawOptions;
- (BOOL)wantsUpdateLayer;

@end
