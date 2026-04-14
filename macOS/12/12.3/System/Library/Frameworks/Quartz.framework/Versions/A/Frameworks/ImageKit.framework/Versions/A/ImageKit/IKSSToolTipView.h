@class IKSSPanel;

@interface IKSSToolTipView : NSView {
    IKSSPanel *_slideshowPanel;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSlideshowPanel:(id)a0;

@end
