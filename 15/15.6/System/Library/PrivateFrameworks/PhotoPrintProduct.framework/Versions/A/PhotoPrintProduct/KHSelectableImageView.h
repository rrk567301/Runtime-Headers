@class NSString;
@protocol KHSelectableImageViewDelegate;

@interface KHSelectableImageView : NSImageView

@property char selected;
@property char acceptsFirstMouse;
@property char showsSelectionLabel;
@property (copy) NSString *selectionLabel;
@property (weak) id<KHSelectableImageViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
