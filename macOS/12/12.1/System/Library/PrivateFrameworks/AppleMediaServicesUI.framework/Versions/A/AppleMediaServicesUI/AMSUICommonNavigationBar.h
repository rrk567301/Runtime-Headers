@class AMSUICommonVisualEffectView, AMSUICommonLabel, AMSUICommonBarButtonItem, AMSUICommonStackView, AMSUICommonNavigationItem;

@interface AMSUICommonNavigationBar : AMSUICommonView

@property (readonly) AMSUICommonStackView *leftStackView;
@property (readonly) AMSUICommonStackView *rightStackView;
@property (readonly) AMSUICommonLabel *titleLabel;
@property (readonly) AMSUICommonVisualEffectView *visualEffectView;
@property (retain, nonatomic) AMSUICommonBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) AMSUICommonNavigationItem *backItem;
@property (retain, nonatomic) AMSUICommonNavigationItem *topItem;
@property BOOL prefersLargeTitles;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)mouseDownCanMoveWindow;
- (void)_setup;
- (void)_setBackgroundStyle:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)_setupVisualEffectView;
- (void)_setupLeftStackView;
- (void)_setupRightStackView;
- (void)_setupTitleLabel;

@end
