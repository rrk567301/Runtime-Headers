@class NSButton, MKPlaceCardActionItem, NSLayoutConstraint;
@protocol MKPlaceCardActionSectionViewDelegate;

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    char _useMarginLayout;
    char _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
}

@property (retain, nonatomic) MKPlaceCardActionItem *leftItem;
@property (retain, nonatomic) MKPlaceCardActionItem *rightItem;
@property (nonatomic) char singleItemIsFullWidth;
@property (retain, nonatomic) NSButton *leftButton;
@property (retain, nonatomic) NSButton *rightButton;
@property (weak, nonatomic) id<MKPlaceCardActionSectionViewDelegate> delegate;

+ (id)_font:(char)a0;
+ (void)_setButtonString:(id)a0 forActionItem:(id)a1 isLeftItem:(char)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)currentLeftItem;
- (void)_contentSizeDidChange;
- (void)_leftButtonIsPressed:(id)a0;
- (id)_makePlaceActionButtonWithActionItem:(id)a0 isLeftItem:(char)a1 useSmallFonts:(char)a2;
- (void)_rightButtonIsPressed:(id)a0;
- (void)_setUpViewWithButtons;
- (id)glyphFont;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(char)a2 singleItemIsFullWidth:(char)a3;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(char)a2 singleItemIsFullWidth:(char)a3 useMarginLayout:(char)a4;
- (void)setTopHairlineHidden:(char)a0;

@end
