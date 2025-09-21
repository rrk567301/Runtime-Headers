@class NSProgressIndicator;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (readonly, nonatomic) char isAnimating;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performSetup;
- (void)setCollapsed:(char)a0;

@end
