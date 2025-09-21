@protocol IMDIndexingMessageScrutinyController, IMDCoreSpotlightSearchableItemGeneratorDelegate;

@interface IMDCoreSpotlightSearchableItemGenerator : NSObject

@property (readonly, nonatomic) id<IMDIndexingMessageScrutinyController> scrutinyController;
@property (readonly, nonatomic) id<IMDCoreSpotlightSearchableItemGeneratorDelegate> delegate;

- (void).cxx_destruct;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1;
- (BOOL)_shouldSkipMessagePartPrefixingForItemDictionary:(id)a0;
- (void)_updateFilteringForSearchableItem:(id)a0 chatDictionary:(id)a1;
- (id)initWithScrutinyController:(id)a0 delegate:(id)a1;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1 error:(id *)a2;
- (id)newSearchableItemsForMessageItemDictionary:(id)a0 chatDictionary:(id)a1 context:(id)a2 rejectedItems:(id)a3 populatedChatItems:(id)a4;

@end
