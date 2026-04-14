@class NSImageView, NSTextField, NSButton, NSStackView;

@interface PrivacyReportStartPageViewItem : StartPageViewItem {
    BOOL _usesPrivateBrowsing;
    long long _numberOfTrackers;
}

@property (weak, nonatomic) NSImageView *shieldIcon;
@property (weak, nonatomic) NSTextField *numberOfTrackersLabel;
@property (weak, nonatomic) NSTextField *bodyText;
@property (retain, nonatomic) NSButton *enableCrossSiteTrackingPreventionButton;
@property (weak, nonatomic) NSStackView *privacyBubbleContentStackView;
@property (weak, nonatomic) NSStackView *crossSiteTrackingContainer;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityHelp;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)populateWithTrackingPreventionDisabled;
- (void)populateLabelsWithNumberOfTrackers:(long long)a0 usesPrivateBrowsing:(BOOL)a1;
- (void)enableCrossSiteTrackingPrevention:(id)a0;
- (void)_turnOnPrivacyProxy;
- (void)_updateEnableTrackingPreventionButtonVibrancy;
- (void)_hideNumberOfTrackers;
- (void)_showEnableCrossSiteTrackingPreventionButton;
- (void)_populateLabels;

@end
