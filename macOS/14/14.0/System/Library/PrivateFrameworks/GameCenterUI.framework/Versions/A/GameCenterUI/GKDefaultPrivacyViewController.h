@class NSTextField, GKDashboardPlayerPhotoView, NSView, NSBox, NSButton, GKPrivacyContainerView;

@interface GKDefaultPrivacyViewController : UXViewController

@property (retain, nonatomic) NSTextField *publicTitle;
@property (retain, nonatomic) NSTextField *publicSubTitle;
@property (retain, nonatomic) NSTextField *friendsOnlyTitle;
@property (retain, nonatomic) NSTextField *friendsOnlySubtitle;
@property (retain, nonatomic) NSTextField *meOnlyTitle;
@property (retain, nonatomic) NSTextField *meOnlySubtitle;
@property (retain, nonatomic) NSView *publicDivider;
@property (retain, nonatomic) NSView *publicContainer;
@property (retain, nonatomic) NSView *friendsOnlyContainer;
@property (retain, nonatomic) NSView *privateContainer;
@property (retain, nonatomic) NSButton *publicRadioButton;
@property (retain, nonatomic) NSButton *publicContainerButton;
@property (retain, nonatomic) NSButton *friendsOnlyRadioButton;
@property (retain, nonatomic) NSButton *friendsOnlyContainerButton;
@property (retain, nonatomic) NSButton *meOnlyRadioButton;
@property (retain, nonatomic) NSButton *meOnlyContainerButton;
@property (retain, nonatomic) NSTextField *subTitle;
@property (retain, nonatomic) NSTextField *privacyDescription;
@property (retain, nonatomic) GKPrivacyContainerView *bottomContainer;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *avatarView;
@property NSBox *nextButtonBackground;
@property NSBox *backButtonBackground;
@property NSButton *backButton;
@property NSButton *notNowButton;
@property NSTextField *underageHintLabel;
@property NSBox *underageHintDivider;
@property (retain, nonatomic) NSButton *nextButton;
@property (retain, nonatomic) NSTextField *mainTitle;
@property (nonatomic) int profilePrivacyVisibility;
@property long long numberOfClicksOnPrivacySelection;

- (void).cxx_destruct;
- (void)updateUI;
- (void)viewDidLoad;
- (void)nextPressed:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)notNowButtonPressed:(id)a0;
- (void)backButtonPressed:(id)a0;
- (void)privacyChanged:(id)a0;
- (void)reportPrivacySelectionClickAnalytics;

@end
