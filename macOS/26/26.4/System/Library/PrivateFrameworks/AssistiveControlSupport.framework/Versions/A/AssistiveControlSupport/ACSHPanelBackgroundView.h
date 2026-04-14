@class NSColor;

@interface ACSHPanelBackgroundView : ACSHView {
    struct CGImage { } *__cachedImage;
}

@property (readonly, nonatomic) struct CGImage { } *_image;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *borderColor;

- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (BOOL)wantsUpdateLayer;

@end
