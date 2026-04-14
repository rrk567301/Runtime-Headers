@class SLHighlightPillView, NSString, NSMenuItem, SLHighlight, NSLayoutConstraint, NSButton, NSColor;
@protocol SLAttributionViewDelegate;

@interface SLAttributionView : NSView <SLHighlightPillViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
@property (nonatomic) BOOL isCollaboration;
@property (retain, nonatomic) SLHighlightPillView *pillView;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic) long long preferredBackgroundStyle;
@property (retain, nonatomic) NSColor *preferredBackgroundColor;
@property (nonatomic) BOOL usesBannerLayout;
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillHorizontalAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonXDimensionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonVerticalConstraint;
@property (nonatomic) double maxWidthForClippingMarquee;
@property (nonatomic) BOOL marqueeRequired;
@property (readonly, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) id<SLAttributionViewDelegate> delegate;
@property (nonatomic) BOOL enablesMarquee;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) NSString *hideMenuItemTitle;
@property (retain, nonatomic) NSMenuItem *supplementalMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useNewDefaultBackgroundStyle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (unsigned long long)variant;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)prepareLayout;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHighlight:(id)a0;
- (void)updateBackgroundStyle:(long long)a0;
- (id)contextMenuItems;
- (void)useBannerLayout;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)updateAlignment:(long long)a0;
- (void)updateInterfaceStyle:(long long)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)prepareLayoutWithMaxWidth:(double)a0;
- (id)additionalContextMenuItemsForHighlightPillView:(id)a0;
- (void)_crossPlatformCloseButtonTapped:(id)a0;
- (void)highlightPillViewDidLoadNewRemoteContent:(id)a0;
- (void)_crossPlatformNeedsLayout;
- (void)_crossPlatformNeedsUpdateConstraints;
- (BOOL)_crossPlatformIsRTL;
- (void)loadCloseButton;
- (void)feedbackForCloseButtonHit;
- (void)_sanitizeFrameIfNecessaryForTAMIC;
- (long long)_alignmentEnforcingPolicies;
- (long long)_backgroundStyleEnforcingPolicies;
- (BOOL)_hasiOSBannerVariant;
- (id)_backgroundColorEnforcingPolicies;
- (double)_minHeightForCurrentStyle;
- (void)_updateMarqueeRequiredIfNecessary;
- (void)_updateMarqueeTargetContentAlignment;

@end
