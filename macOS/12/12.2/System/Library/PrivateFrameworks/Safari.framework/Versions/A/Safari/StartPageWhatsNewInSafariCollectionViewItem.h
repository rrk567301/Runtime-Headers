@class NSImageView, NSTextField, NSArray, NSGridCell, NSButton;
@protocol StartPageWhatsNewInSafariCollectionViewItemDelegate;

@interface StartPageWhatsNewInSafariCollectionViewItem : NSCollectionViewItem {
    NSArray *_accessibiltyChildren;
}

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
@property (weak) id<StartPageWhatsNewInSafariCollectionViewItemDelegate> delegate;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)isAccessibilityAutoInteractable;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)openLink:(id)a0;
- (void)_updateAppearance;

@end
