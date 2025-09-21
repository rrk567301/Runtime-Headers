@class NSTextField, NSString, NSView, AccessibilityInteractableTextField, WBSPrivacyReportData, NSStackView, NSLayoutConstraint, WBSPrivacyReportMetrics;
@protocol StartPagePrivacyReportRedesignViewItemDelegate;

@interface StartPagePrivacyReportRedesignViewItem : StartPageViewItem <AccessibilityInteractableTextFieldDelegate> {
    WBSPrivacyReportMetrics *_cachedMetrics;
    char _usesPrivateBrowsing;
    NSView *_descriptionView;
    NSView *_privacyDetailView;
    NSStackView *_privacyReportStackView;
    NSStackView *_privacyMetricsStackView;
    NSTextField *_privacyReportDescriptionLabel;
    NSTextField *_lastThirtyDaysTextField;
    NSTextField *_preventedTrackersTitleTextField;
    NSTextField *_preventedTrackersTextField;
    NSTextField *_contactedTrackersTitleTextField;
    NSTextField *_contactedTrackersTextField;
    NSTextField *_mostContactedTrackersTitleTextField;
    NSTextField *_mostContactedTrackerTextField;
    AccessibilityInteractableTextField *_showMoreLabel;
    NSLayoutConstraint *_showMoreLabelBottomAnchor;
}

@property (retain, nonatomic) WBSPrivacyReportData *privacyReportData;
@property (nonatomic) char usesNarrowLayout;
@property (weak, nonatomic) id<StartPagePrivacyReportRedesignViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isAccessibilityAutoInteractable;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityRole;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)_createDescriptionView;
- (id)_createMetricCellWithTitleLabel:(id)a0 textLabel:(id)a1;
- (void)_createPrivacyDetailView;
- (id)_createTextLabel:(id)a0;
- (id)_createTitleLabel:(id)a0;
- (id)_privacyReportLabel;
- (void)_updatePrivacyDetailView;
- (void)accessibilityInteractableTextFieldPerformPress:(id)a0;
- (void)populateLabelsWithCachedPrivacyReportMetrics:(id)a0 usesPrivateBrowsing:(char)a1;
- (void)populateWithTrackingPreventionDisabled;

@end
