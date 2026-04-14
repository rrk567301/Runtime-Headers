@class SLHighlightPillView, NSString, SLHighlight, NSLayoutConstraint, NSButton, NSColor;
@protocol SLAttributionViewDelegate;

@interface SLAttributionView : NSView <SLHighlightPillViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
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
@property (readonly, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) id<SLAttributionViewDelegate> delegate;
@property (nonatomic) BOOL enablesMarquee;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useNewDefaultBackgroundStyle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (unsigned long long)variant;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHighlight:(id)a0;
- (id)contextMenuItems;
- (void)updateBackgroundStyle:(long long)a0;
- (void)useBannerLayout;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)updateAlignment:(long long)a0;
- (void)updateInterfaceStyle:(long long)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)prepareLayoutWithMaxWidth:(double)a0;
- (void)highlightPillViewDidLoadNewRemoteContent:(id)a0;
- (id)additionalContextMenuItemsForHighlightPillView:(id)a0;
- (long long)_backgroundStyleEnforcingPolicies;
- (id)_backgroundColorEnforcingPolicies;
- (void)_updateMarqueeIfNecessary;
- (double)_minHeightForCurrentStyle;
- (void)_crossPlatformCloseButtonTapped:(id)a0;
- (void)_crossPlatformNeedsUpdateConstraints;
- (void)feedbackForCloseButtonHit;
- (void)_sanitizeFrameIfNecessaryForTAMIC;
- (void)_crossPlatformNeedsLayout;
- (BOOL)_hasiOSBannerVariant;
- (void)loadCloseButton;
- (long long)_alignmentEnforcingPolicies;
- (BOOL)_crossPlatformIsRTL;

@end
