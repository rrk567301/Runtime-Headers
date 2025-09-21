@class NSImage, NSImageView;

@interface Safari.CompletionListCollectionViewItem : NSCollectionViewItem {
    void /* function */ deleteAction;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ accessibilityCell;
    void /* unknown type, empty encoding */ itemContextMenu;
    void /* unknown type, empty encoding */ itemContextMenuShouldPresentFromRightClickEvent;
    void /* unknown type, empty encoding */ secondaryImageView;
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ textFieldStackView;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ titleTextField;
    void /* unknown type, empty encoding */ subtitleTextField;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ attributedStringsForBackgroundStyles;
    void /* unknown type, empty encoding */ currentBackgroundStyle;
    void /* unknown type, empty encoding */ shouldUseTrackingArea;
    void /* unknown type, empty encoding */ platterView;
    void /* unknown type, empty encoding */ platterHeightConstraint;
    void /* unknown type, empty encoding */ selectionView;
    void /* unknown type, empty encoding */ selectionViewPlatteredHeightConstraint;
    void /* unknown type, empty encoding */ itemData;
    void /* unknown type, empty encoding */ magnifyingGlassIcon;
    void /* unknown type, empty encoding */ globeIcon;
    void /* unknown type, empty encoding */ clockIcon;
    void /* unknown type, empty encoding */ checkmarkIcon;
    void /* unknown type, empty encoding */ arrowIcon;
    void /* unknown type, empty encoding */ shouldHidePlatterIfNotSelected;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shouldShowPlatter;
}

@property (nonatomic, copy) id /* block */ deleteAction;
@property (nonatomic, retain) NSImageView *iconImageView;
@property (nonatomic) BOOL showsIcon;
@property (nonatomic, retain) NSImage *icon;
@property (nonatomic, retain) NSImage *secondaryImage;
@property (nonatomic) BOOL selected;

- (void)mouseDown:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)isSelected;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)deleteRow:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)presentContextMenu:(id)a0;

@end
