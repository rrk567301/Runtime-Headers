@class NSString, NSView, NSStackView, NSButton;
@protocol StartPageCollectionSectionTitleViewDelegate;

@interface StartPageCollectionSectionTitleView : NSView <NSCollectionViewElement> {
    NSButton *_backButton;
}

@property (class, readonly, nonatomic) double defaultTitleViewHeight;

@property (weak, nonatomic) NSStackView *contentStackView;
@property (weak, nonatomic) NSButton *sectionTitleButton;
@property (weak, nonatomic) NSButton *collapseButton;
@property (weak, nonatomic) id<StartPageCollectionSectionTitleViewDelegate> delegate;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *titleAccessibilityLabel;
@property (copy, nonatomic) id /* block */ sectionTitlePopupAction;
@property (nonatomic) BOOL canCollapseSection;
@property (nonatomic) BOOL isSectionCollapsed;
@property (nonatomic) BOOL isShowMoreButtonVisible;
@property (nonatomic) BOOL canGoBack;
@property (retain, nonatomic) NSView *trailingAccessoryView;
@property (weak, nonatomic) NSStackView *bottomAccessoryViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)_goBack:(id)a0;
- (void)_updateTrailingButtons;
- (void)_updateGoBackButton;
- (id)_collapseButtonImage;
- (void)toggleCollapseSection:(id)a0;
- (void)_titleButtonClicked:(id)a0;

@end
