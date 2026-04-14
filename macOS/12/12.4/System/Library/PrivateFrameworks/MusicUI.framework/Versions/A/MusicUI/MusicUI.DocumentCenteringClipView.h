@interface MusicUI.DocumentCenteringClipView : NSClipView {
    void /* unknown type, empty encoding */ topOverhangView;
    void /* unknown type, empty encoding */ overhangViews;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL drawsBackground;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_overhangSubviews;
- (void)_setOverhangSubviews:(id)a0;

@end
