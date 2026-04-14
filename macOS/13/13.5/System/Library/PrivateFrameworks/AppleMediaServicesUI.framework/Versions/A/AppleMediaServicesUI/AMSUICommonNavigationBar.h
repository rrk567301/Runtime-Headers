@class AMSUICommonVisualEffectView, AMSUICommonLabel, NSString, AMSUICommonStackView;

@interface AMSUICommonNavigationBar : AMSUICommonView

@property (readonly) AMSUICommonStackView *leftStackView;
@property (readonly) AMSUICommonStackView *rightStackView;
@property (readonly) AMSUICommonLabel *titleLabel;
@property (readonly) AMSUICommonVisualEffectView *visualEffectView;
@property (retain) NSString *title;
@property (getter=isVisualEffectViewHidden) BOOL visualEffectViewHidden;
@property BOOL prefersLargeTitles;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)mouseDownCanMoveWindow;
- (void)_setupStackViews;
- (void)_setupTitleLabel;
- (void)_setupVisualEffectView;
- (void)updateLeftBarButtonItems:(id)a0;
- (void)updateRightBarButtonItems:(id)a0;

@end
