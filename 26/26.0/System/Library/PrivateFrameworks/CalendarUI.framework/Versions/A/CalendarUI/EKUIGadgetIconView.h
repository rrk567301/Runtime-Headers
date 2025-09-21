@class NSView, NSLayoutConstraint;

@interface EKUIGadgetIconView : EKUIGadgetView

@property (retain) NSView *contentView;
@property (retain) NSView *iconView;
@property (retain) NSLayoutConstraint *iconWidthConstraint;

- (void)addSubview:(id)a0;
- (void).cxx_destruct;
- (void)shouldHideIcon:(BOOL)a0;
- (id)initWithIconImage:(id)a0;

@end
