@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject

@property (readonly, nonatomic, getter=_conversation) AFConversation *conversation;
@property (readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier;

- (id)init;
- (id)itemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfItems;
- (void)removeItemsAtIndexes:(id)a0;
- (void)removeItemsWithIdentifiers:(id)a0;
- (id)itemWithIdentifier:(id)a0;
- (id)initWithConversation:(id)a0 parentItemIdentifier:(id)a1;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemAtIndex:(long long)a3;
- (id)identifiersForItemsAtIndexes:(id)a0;
- (BOOL)itemIsRestoredAtIndex:(long long)a0;
- (id)_identifierOfItemAtIndex:(long long)a0;
- (id)_indexPathForItemAtIndex:(long long)a0;
- (id)_indexPathForLastRestoredItem;
- (void)_addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemWithIdentifier:(id)a3;

@end
