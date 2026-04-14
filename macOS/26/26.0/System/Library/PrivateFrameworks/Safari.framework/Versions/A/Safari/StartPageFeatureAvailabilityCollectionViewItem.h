@class NSTextField, NSGridCell, NSArray, NSDateFormatter, NSGridRow, NSStackView, NSGridView, NSLayoutConstraint, NSImageView, NSButton, ContentHuggingTextField;
@protocol StartPageFeatureAvailabilityCollectionViewItemDelegate;

@interface StartPageFeatureAvailabilityCollectionViewItem : StartPageViewItem {
    NSArray *_accessibiltyChildren;
    NSDateFormatter *_dateFormatter;
    NSButton *_openSoftwareUpdateSettingsButton;
    NSButton *_remindMeLaterButton;
    NSStackView *_buttonStackView;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) ContentHuggingTextField *headerLabel;
@property (weak, nonatomic) NSTextField *topLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *topLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingSubtitleLabel;
@property (weak, nonatomic) NSImageView *bottomTrailingIcon;
@property (weak, nonatomic) NSImageView *bottomLeadingIcon;
@property (weak, nonatomic) NSImageView *topLeadingIcon;
@property (weak, nonatomic) NSImageView *topTrailingIcon;
@property (weak, nonatomic) NSGridCell *topLeadingTextCell;
@property (weak, nonatomic) NSGridCell *topTrailingTextCell;
@property (weak, nonatomic) NSGridCell *bottomLeadingTextCell;
@property (weak, nonatomic) NSGridCell *bottomTrailingTextCell;
@property (weak, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) NSGridRow *secondRow;
@property (weak, nonatomic) NSGridView *highlightedFeaturesGridView;
@property (weak, nonatomic) id<StartPageFeatureAvailabilityCollectionViewItemDelegate> delegate;
@property (nonatomic) BOOL forPrivateBrowsing;
@property (nonatomic) BOOL forSofwareUpdateAwareness;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (id)_sections;
- (void).cxx_destruct;
- (BOOL)isAccessibilityAutoInteractable;
- (void)_updateAccessibilityChildren;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)accessibilityElement;
- (void)_updateAppearance;
- (void)openLink:(id)a0;
- (void)_remindMeLater:(id)a0;
- (void)_updateSections;
- (void)_hideSecondRowIfNeeded;
- (void)_openSoftwareUpdateSettings:(id)a0;
- (void)_setUpButtonStackViewIfNeeded;
- (void)_softwareUpdateAwarenessContentDidChange:(id)a0;
- (void)_updateSectionsForPrivateBrowsing;
- (void)_updateSectionsForSoftwareUpdateAwareness;

@end
