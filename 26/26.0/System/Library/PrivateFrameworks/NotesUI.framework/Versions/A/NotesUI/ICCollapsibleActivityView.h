@class NSProgressIndicator;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (readonly, nonatomic) BOOL isAnimating;

- (void)commonInit;
- (void)setCollapsed:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)performSetup;

@end
