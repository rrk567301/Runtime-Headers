@class NSColor;

@interface SinglePixelLine : UXView

@property (retain, nonatomic) NSColor *color;

- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)updateHeight;

@end
