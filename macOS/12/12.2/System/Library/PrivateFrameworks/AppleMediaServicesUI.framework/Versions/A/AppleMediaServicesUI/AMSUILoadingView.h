@class NSProgressIndicator, NSTextField;

@interface AMSUILoadingView : AMSUICommonView

@property (retain) NSProgressIndicator *activityIndicator;
@property (retain) NSTextField *label;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setLoadingText:(id)a0;
- (void)layoutSubviews;

@end
