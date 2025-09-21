@class NSTextField;

@interface _NSToolbarItemBadgeView : NSView

@property (retain, nonatomic) NSTextField *titleLabel;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setString:(id)a0;
- (void).cxx_destruct;
- (void)addTitleLabel:(id)a0;
- (id)createTitleLabel;
- (void)setUpView;

@end
