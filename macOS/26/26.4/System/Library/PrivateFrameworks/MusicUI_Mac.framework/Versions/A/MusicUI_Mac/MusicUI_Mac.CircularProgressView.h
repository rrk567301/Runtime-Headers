@interface MusicUI_Mac.CircularProgressView : NSControl {
    void /* unknown type, empty encoding */ tintColor;
    void /* unknown type, empty encoding */ preferredSize;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ imageScale;
    void /* unknown type, empty encoding */ spinAnimator;
    void /* unknown type, empty encoding */ progressLayer;
    void /* unknown type, empty encoding */ trackLayer;
    void /* unknown type, empty encoding */ imageView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) double accessibilityProgressValue;

- (void)updateLayer;
- (void)layout;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
