@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView {
    id _parentView;
}

@property (weak) NSTouchBarRangeView *parentView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)initWithCoder:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)encodeWithCoder:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_commonViewSetup;
- (id)_coreUIDrawOptions;
- (BOOL)wantsUpdateLayer;

@end
