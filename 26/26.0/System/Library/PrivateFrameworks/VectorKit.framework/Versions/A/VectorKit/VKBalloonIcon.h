@interface VKBalloonIcon : NSObject {
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _balloonImage;
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _dotImage;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dotRect;
- (struct CGImage { } *)balloonImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })balloonRect;
- (struct CGColor { } *)defaultGlyphColor;
- (struct CGImage { } *)dotImage;
- (id)initWithBalloonImage:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a0 dotImage:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a1;

@end
