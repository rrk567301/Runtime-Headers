@class NSSearchField, SFColor, NSString, SFCard, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener;

@interface SearchUICardTableViewController : SearchUITableViewController <SearchUINSCardTableBridgingProtocol>

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) char disableNextCards;
@property (nonatomic) char selectOnHover;
@property (nonatomic) char floatingHeaders;
@property (nonatomic) char scrollEnabled;
@property (nonatomic) char singleClickExecutesCommands;
@property (retain, nonatomic) SFColor *searchUIBackgroundColor;
@property (nonatomic) char selectionShouldFillWidth;
@property (nonatomic) char disableEmphasizedSelection;
@property (nonatomic) char dragInteractionEnabled;
@property (nonatomic, getter=isInPreviewPlatter) char inPreviewPlatter;
@property (weak, nonatomic) NSSearchField *searchField;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadViews;
- (double)contentSizeForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })preferredScrollViewContentSize;

@end
