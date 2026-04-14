@class SWHighlight, SLAttributionView, NSArray, NSString, NSMenu, NSMenuItem;

@interface SWAttributionView : NSView <SLAttributionViewDelegate>

@property (retain, nonatomic) SLAttributionView *slAttributionView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) SWHighlight *highlight;
@property (nonatomic) long long displayContext;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (readonly, nonatomic) NSMenu *highlightMenu;
@property (retain, nonatomic) NSString *menuTitleForHideAction;
@property (retain, nonatomic) NSMenuItem *supplementalMenu;
@property (nonatomic) BOOL enablesMarquee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidMoveToWindow;
- (void)updateConstraints;
- (id)closeButton;
- (void)useBannerLayout;
- (void)_updateSLAttributionViewAlignment;
- (void)_updateSLAttributionViewBackgroundStyle;
- (void)_updateSLAttributionViewSupplementalMenu;
- (void)_updateSLAttributionViewHideMenuItemTitle;
- (void)_updateSLAttributionViewEnablesMarquee;
- (void)_sendFeedbackForCurrentDisplayContext;

@end
