@class NSSearchField, NSString, SFCard, SearchUITableModel;
@protocol SearchUICardViewDelegate, SFFeedbackListener;

@interface SearchUICardTableViewController : SearchUITableViewController <SearchUINSCardTableBridgingProtocol>

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL floatingHeaders;
@property (weak, nonatomic) NSSearchField *searchField;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)contentSizeForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })preferredScrollViewContentSize;
- (void)reloadViews;

@end
