@class NSImageView, NSGridView, NSTextField, NSButton, NSStackView, NSGridCell;
@protocol StartPageFeatureAvailabilityBrowseInSafariCollectionViewItemDelegate;

@interface StartPageFeatureAvailabilityBrowseInSafariCollectionViewItem : NSCollectionViewItem

@property (weak, nonatomic) NSTextField *topLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *topLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingSubtitleLabel;
@property (weak, nonatomic) NSImageView *topLeadingIcon;
@property (weak, nonatomic) NSImageView *bottomTrailingIcon;
@property (weak, nonatomic) NSImageView *topTrailingIcon;
@property (weak, nonatomic) NSImageView *bottomLeadingIcon;
@property (weak, nonatomic) NSTextField *descriptionForSetSafariButton;
@property (weak, nonatomic) NSGridView *highlightedFeaturesGridView;
@property (weak, nonatomic) NSStackView *overarchingStackView;
@property (weak, nonatomic) NSGridCell *topLeadingTextCell;
@property (weak, nonatomic) NSGridCell *topTrailingTextCell;
@property (weak, nonatomic) NSGridCell *bottomLeadingTextCell;
@property (weak, nonatomic) NSGridCell *bottomTrailingTextCell;
@property (weak, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) NSButton *makeSafariDefaultBrowserButton;
@property (weak) id<StartPageFeatureAvailabilityBrowseInSafariCollectionViewItemDelegate> delegate;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)didMakeSafariDefault:(id)a0;

@end
