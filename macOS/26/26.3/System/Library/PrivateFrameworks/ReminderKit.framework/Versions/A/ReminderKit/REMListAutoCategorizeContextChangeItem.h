@class NSArray, REMListChangeItem;

@interface REMListAutoCategorizeContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) BOOL shouldAutoCategorizeItems;
@property (readonly, nonatomic) NSArray *unsavedReminderIDsForCategorization;

- (void).cxx_destruct;
- (void)categorizeAutoCategorizationItemsWithReminderIDs:(id)a0;
- (id)initWithListChangeItem:(id)a0;

@end
