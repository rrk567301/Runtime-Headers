@class NSImageView, NSView, WFIconHostingView, WFMenuItemLabelView;

@interface WFMenuItemView : NSView

@property (readonly, nonatomic) NSView *statusView;
@property (readonly, nonatomic) NSImageView *statusImageView;
@property (readonly, nonatomic) NSImageView *symbolImageView;
@property (readonly, nonatomic) WFIconHostingView *iconView;
@property (readonly, nonatomic) WFMenuItemLabelView *labelView;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithMenuItem:(id)a0 showStatus:(BOOL)a1;

@end
