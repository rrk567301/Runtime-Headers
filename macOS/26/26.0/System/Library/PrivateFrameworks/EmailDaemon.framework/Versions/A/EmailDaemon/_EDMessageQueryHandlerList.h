@class NSArray, NSMutableArray, EFOrderedDictionary;

@interface _EDMessageQueryHandlerList : NSObject

@property (readonly, nonatomic) id /* block */ entryComparator;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, copy, nonatomic) EFOrderedDictionary *sectionPredicates;
@property (readonly, nonatomic) NSMutableArray *entryList;
@property (readonly, nonatomic) BOOL hasItemsInList;
@property (readonly, nonatomic) NSArray *allMessageGlobalIDs;

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (id /* block */)_comparatorForSortDescriptors:(id)a0;
- (id)insertMessagesReturningMessagesByPreviousObjectID:(id)a0;
- (id)movesForExistingMessages:(id)a0;

@end
