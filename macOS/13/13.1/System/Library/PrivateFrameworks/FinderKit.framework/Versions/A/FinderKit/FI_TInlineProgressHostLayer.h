@class FI_TInlineCancelButtonLayer;

@interface FI_TInlineProgressHostLayer : FI_TInlineProgressBaseHostLayer {
    FI_TInlineCancelButtonLayer *_cancelLayer;
}

@property (nonatomic) BOOL canCancel;
@property (nonatomic) BOOL cancelIsPressed;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelFrame;
@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) long long userInterfaceLayoutDirection;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameForIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)setIconFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 baselineOffset:(double)a1;
- (void)adjustCancelLayerFrame;
- (void)addCancelLayer;
- (void)removeCancelLayer;
- (id)initWithCancel:(BOOL)a0 initialPercentComplete:(double)a1;
- (void)_setCancelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hitTestCancelLayer:(const struct CGPoint { double x0; double x1; } *)a0;

@end
