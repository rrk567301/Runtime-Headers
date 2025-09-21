@class NSImageView;

@interface AXVScrollMenuItem : AXVHighlightView

@property (retain, nonatomic) NSImageView *_imageView;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double cornerRadiusFactor;
@property (nonatomic) double imageInsetFactor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (id)initForDirection:(unsigned long long)a0;

@end
