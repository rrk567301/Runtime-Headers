@interface AMPDesktopUI.AMPFlippedDocumentView : NSView

@property (nonatomic, readonly) char flipped;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;

@end
