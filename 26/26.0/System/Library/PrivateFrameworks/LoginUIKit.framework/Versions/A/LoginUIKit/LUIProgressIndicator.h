@class NSImage, NSMutableArray;

@interface LUIProgressIndicator : NSView {
    BOOL _isSpinning;
    BOOL _isHeartBeatInstalled;
    unsigned long long _controlSize;
    unsigned long long _animationFrame;
    unsigned long long _prevAnimationFrame;
    NSMutableArray *_images;
    NSImage *_image;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (unsigned long long)controlSize;
- (void)stopAnimation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setControlSize:(unsigned long long)a0;
- (void)startAnimation:(id)a0;
- (void)sizeToFit;
- (void)heartBeat:(struct { double x0; double x1; double x2; struct { unsigned char x0 : 1; unsigned int x1 : 31; } x3; } *)a0;
- (void).cxx_destruct;
- (id)_imageForIndex:(unsigned long long)a0;
- (id)_images;
- (void)_installHeartBeat:(BOOL)a0;

@end
