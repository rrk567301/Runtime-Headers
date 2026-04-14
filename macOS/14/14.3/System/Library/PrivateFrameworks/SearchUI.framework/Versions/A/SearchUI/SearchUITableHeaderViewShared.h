@class SearchUISectionModel, TLKTextButton, SFCollectionCardSection, SFResultSection;
@protocol SFFeedbackListener, SearchUITableHeaderCommandDelegate, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderViewShared : TLKTableCellView

@property (weak, nonatomic) id<SearchUITableHeaderViewDelegate> headerViewDelegate;
@property (weak, nonatomic) id<SearchUITableHeaderCommandDelegate> commandDelegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) TLKTextButton *headerOptionButton;
@property (retain, nonatomic) SFResultSection *section;
@property (retain, nonatomic) SFCollectionCardSection *cardSection;
@property (nonatomic, getter=isExpanded) BOOL isExpanded;
@property (nonatomic) unsigned long long headerType;
@property (retain, nonatomic) SearchUISectionModel *sectionModel;

- (void).cxx_destruct;
- (id)moreResultsPunchout;
- (void)moreButtonPressed;
- (id)attributedStringWithSymbolImageName:(id)a0 text:(id)a1;
- (BOOL)sectionCanInlineExpand;
- (BOOL)supportsShowMoreInApp;
- (void)updateButtonWithAttributedText:(id)a0 image:(id)a1;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)a0;
- (void)updateWithCollectionCardSection:(id)a0 section:(id)a1 isExpanded:(BOOL)a2;

@end
