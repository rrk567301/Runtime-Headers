@class NSGlassEffectView;

@interface QLOverlayGlassBackground : NSView

@property (retain) NSGlassEffectView *glassView;
@property struct CGSize { double width; double height; } size;
@property struct CGSize { double width; double height; } expandedSize;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL smallSize;

- (void).cxx_destruct;
- (void)updateGlassSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1 expandedSize:(struct CGSize { double x0; double x1; })a2;

@end
