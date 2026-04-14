@class SearchUIRowModel, NSSearchField, NSString, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUIResultsViewDelegate, SFFeedbackListener;

@interface SearchUITableViewController : TLKTableViewController <TLKExtendedTableViewDelegate, SearchUIFeedbackDelegate> {
    BOOL _forceSectionJump;
    NSSearchField *_searchField;
    SearchUIRowModel *_savedSelection;
}

@property unsigned long long lastVisibleResultsFeedbackEvent;
@property unsigned long long lastResultEngagementFeedbackEvent;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL activateOnSelect;
@property (nonatomic) BOOL floatingHeaders;
@property (weak, nonatomic) NSSearchField *searchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)reloadData;
- (void)keyDown:(id)a0;
- (unsigned long long)numberOfRows;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)restoreSelection;
- (void)saveSelection;
- (void)didMouseDownRow:(long long)a0 withClickCount:(long long)a1;
- (void)didMouseUpRow:(long long)a0 withClickCount:(long long)a1;
- (id)cellViewForRow:(unsigned long long)a0;
- (id)rowViewForRow:(unsigned long long)a0;
- (void)selectionDidChangeToRow:(long long)a0;
- (BOOL)selectNextRowByCategory:(BOOL)a0 forward:(BOOL)a1;
- (BOOL)performActionForSelectedRow;
- (BOOL)selectFirstSelectableRow;
- (BOOL)selectCardSection:(id)a0;
- (id)selectedCardSection;
- (BOOL)forwardFeedbackForSelector:(SEL)a0;
- (void)setTableModel:(id)a0 reloadData:(BOOL)a1;
- (void)sendEngagmentFeedbackAfterActionPerformedForRowModel:(id)a0 inSection:(id)a1 destination:(id)a2;
- (void)didEngageGroupRow:(long long)a0;
- (id)tableModelIndexPathForRow:(unsigned long long)a0;
- (BOOL)canSelectRowModel:(id)a0;
- (void)updateFeedbackEventStateForEvent:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1 ignoreCommandFlag:(BOOL)a2;
- (BOOL)performRowActionForRow:(long long)a0 nextCardOnly:(BOOL)a1 trigger:(unsigned long long)a2;

@end
