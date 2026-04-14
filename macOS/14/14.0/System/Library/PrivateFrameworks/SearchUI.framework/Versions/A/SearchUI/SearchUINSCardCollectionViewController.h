@class NSSearchField, NSString, SFCard, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener;

@interface SearchUINSCardCollectionViewController : SearchUICollectionViewController <SearchUINSCardTableBridgingProtocol>

@property (nonatomic) BOOL disablesNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL floatingHeaders;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
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
- (BOOL)restoreSelection;
- (void)saveSelection;
- (void)reloadViews;
- (double)contentSizeForWidth:(double)a0;
- (BOOL)performActionForSelectedRow;
- (struct CGSize { double x0; double x1; })preferredScrollViewContentSize;
- (BOOL)selectCardSection:(id)a0;
- (BOOL)selectFirstSelectableRow;
- (BOOL)selectNextRowByCategory:(BOOL)a0 forward:(BOOL)a1;
- (id)selectedCardSection;

@end
