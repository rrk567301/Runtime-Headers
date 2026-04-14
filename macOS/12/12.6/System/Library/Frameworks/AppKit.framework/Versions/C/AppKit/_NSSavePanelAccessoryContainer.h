@interface _NSSavePanelAccessoryContainer : NSView

@property (nonatomic) struct CGSize { double width; double height; } accessoryPreferredSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonInit;

@end
