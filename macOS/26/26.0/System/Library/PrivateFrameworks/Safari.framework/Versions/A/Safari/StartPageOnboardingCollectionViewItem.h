@class NSTextField, NSString, NSArray, NSView, StartPageOnboardingCollectionViewItemConfiguration, NSStackView, NSLayoutConstraint, NSImageView, NSButton;
@protocol StartPageOnboardingCollectionViewItemDelegate;

@interface StartPageOnboardingCollectionViewItem : StartPageViewItem <NSTextFieldDelegate, WBSOnboardingProvider> {
    long long _currentLayoutType;
    NSArray *_constraintsForCurrentLayoutType;
    NSStackView *_verticalStackView;
    NSStackView *_horizontalStackView;
    NSTextField *_titleLabel;
    NSTextField *_textLabel;
    NSView *_artworkContainerView;
    NSView *_onboardingArtworkView;
    NSImageView *_onboardingImageView;
    NSLayoutConstraint *_artworkContainerViewHeightConstraint;
    NSButton *_mainButton;
    NSButton *_closeButton;
}

@property (retain, nonatomic) StartPageOnboardingCollectionViewItemConfiguration *configuration;
@property (weak, nonatomic) id<StartPageOnboardingCollectionViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long state;

- (void)viewDidLoad;
- (id)accessibilityRole;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (void)start:(id)a0;
- (BOOL)isAccessibilityAutoInteractable;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)viewWillLayout;
- (BOOL)accessibilityElement;
- (void)_layoutSubviewsForCompactLayout;
- (void)_applyCurrentConfiguration;
- (id)_attributedTextWithLinkForConfiguration:(id)a0;
- (void)_layoutSubviewsForWideLayout;
- (long long)_optimalLayoutForFrameWidth;

@end
