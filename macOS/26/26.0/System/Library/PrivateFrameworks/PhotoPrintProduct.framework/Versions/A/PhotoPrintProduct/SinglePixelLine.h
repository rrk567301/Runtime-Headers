@class NSColor;

@interface SinglePixelLine : UXView

@property (retain, nonatomic) NSColor *color;

- (void)viewDidMoveToSuperview;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (void)updateHeight;

@end
