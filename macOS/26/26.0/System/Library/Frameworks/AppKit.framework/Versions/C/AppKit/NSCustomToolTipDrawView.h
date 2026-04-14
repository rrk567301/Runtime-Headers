@class NSAttributedString, NSToolTip;

@interface NSCustomToolTipDrawView : NSView

@property (retain) NSToolTip *toolTipObject;
@property (copy) NSAttributedString *attributedString;
@property struct CGSize { double width; double height; } margin;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (BOOL)isFlipped;

@end
