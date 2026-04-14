@interface ToolbarDownloadsButtonProgressBar : NSView

@property (nonatomic) float progress;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_drawThreePatchesImage:(id)a0 operation:(unsigned long long)a1;

@end
