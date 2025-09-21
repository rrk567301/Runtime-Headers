@class NSSearchField, SFColor, NSString, SFCard, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener;

@interface SearchUINSCardCollectionViewController : SearchUICollectionViewController <SearchUINSCardTableBridgingProtocol>

@property (nonatomic) char disablesNextCards;
@property (nonatomic) char selectOnHover;
@property (nonatomic) char floatingHeaders;
@property (nonatomic, getter=isInPreviewPlatter) char inPreviewPlatter;
@property (nonatomic) char disableNextCards;
@property (nonatomic) char scrollEnabled;
@property (nonatomic) char singleClickExecutesCommands;
@property (retain, nonatomic) SFColor *searchUIBackgroundColor;
@property (nonatomic) char selectionShouldFillWidth;
@property (nonatomic) char disableEmphasizedSelection;
@property (nonatomic) char dragInteractionEnabled;
@property (weak, nonatomic) NSSearchField *searchField;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)restoreSelection;
- (void)saveSelection;
- (void)reloadViews;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (double)contentSizeForWidth:(double)a0;
- (char)performActionForSelectedRow;
- (char)selectCardSection:(id)a0;
- (char)selectFirstSelectableRow;
- (char)selectNextRowByCategory:(char)a0 forward:(char)a1;
- (id)selectedCardSection;

@end
