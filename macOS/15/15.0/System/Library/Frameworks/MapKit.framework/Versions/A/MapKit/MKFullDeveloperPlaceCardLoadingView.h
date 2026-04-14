@interface MKFullDeveloperPlaceCardLoadingView : NSView

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (id)init;
- (void)setup;
- (id)_createContainerViewWithBackground:(BOOL)a0;
- (id)_createSeparatorView;

@end
