@class SearchUIRowModel, NSSearchField, NSString, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUIResultsViewDelegate, SFFeedbackListener;

@interface SearchUITableViewController : TLKTableViewController <TLKExtendedTableViewDelegate, SearchUIFeedbackDelegate> {
    char _forceSectionJump;
    NSSearchField *_searchField;
    SearchUIRowModel *_savedSelection;
}

@property unsigned long long lastVisibleResultsFeedbackEvent;
@property unsigned long long lastResultEngagementFeedbackEvent;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (nonatomic) char disableNextCards;
@property (nonatomic) char selectOnHover;
@property (nonatomic) char activateOnSelect;
@property (nonatomic) char floatingHeaders;
@property (nonatomic) char inPreviewPlatter;
@property (weak, nonatomic) NSSearchField *searchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)keyDown:(id)a0;
- (unsigned long long)numberOfRows;
- (void)reloadData;
- (char)tableView:(id)a0 isGroupRow:(long long)a1;
- (char)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (char)restoreSelection;
- (void)saveSelection;
- (id)cellViewForRow:(unsigned long long)a0;
- (void)didMouseDownRow:(long long)a0 withClickCount:(long long)a1;
- (void)didMouseUpRow:(long long)a0 withClickCount:(long long)a1;
- (id)rowViewForRow:(unsigned long long)a0;
- (void)selectionDidChangeToRow:(long long)a0;
- (char)canSelectRowModel:(id)a0;
- (void)didEngageGroupRow:(long long)a0;
- (char)forwardFeedbackForSelector:(SEL)a0;
- (char)performActionForSelectedRow;
- (char)performRowActionForRow:(long long)a0 nextCardOnly:(char)a1 trigger:(unsigned long long)a2;
- (char)selectCardSection:(id)a0;
- (char)selectFirstSelectableRow;
- (char)selectNextRowByCategory:(char)a0 forward:(char)a1;
- (id)selectedCardSection;
- (void)sendEngagmentFeedbackAfterActionPerformedForRowModel:(id)a0 inSection:(id)a1 destination:(id)a2;
- (void)setTableModel:(id)a0 reloadData:(char)a1;
- (id)tableModelIndexPathForRow:(unsigned long long)a0;
- (char)tableView:(id)a0 shouldSelectRow:(long long)a1 ignoreCommandFlag:(char)a2;
- (void)updateFeedbackEventStateForEvent:(id)a0;

@end
