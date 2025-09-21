@class NSString, NSArray, REMListChangeItem;

@interface REMListGroceryContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) char shouldCategorizeGroceryItems;
@property (readonly, nonatomic) char shouldSuggestConversionToGroceryList;
@property (copy, nonatomic) NSString *groceryLocaleID;
@property (readonly, nonatomic) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;

- (void).cxx_destruct;
- (void)categorizeGroceryItemsWithReminderIDs:(id)a0;
- (id)initWithListChangeItem:(id)a0;

@end
