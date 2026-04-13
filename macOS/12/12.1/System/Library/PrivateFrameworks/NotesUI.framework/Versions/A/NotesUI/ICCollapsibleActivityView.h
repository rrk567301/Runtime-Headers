@class NSProgressIndicator;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (readonly, nonatomic) BOOL isAnimating;

- (void).cxx_destruct;
- (void)setCollapsed:(BOOL)a0;
- (void)performSetup;

@end
