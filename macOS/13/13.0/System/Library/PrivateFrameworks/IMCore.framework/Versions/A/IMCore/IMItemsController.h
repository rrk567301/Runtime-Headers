@class NSArray;

@interface IMItemsController : NSObject

@property (nonatomic) struct __CFArray { } *items;
@property (readonly, copy, nonatomic) NSArray *_items;
@property (nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) BOOL isMoreToLoad;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (void)dealloc;
- (id)init;
- (void)_removeAllItems;
- (unsigned long long)_indexOfItem:(id)a0;
- (void)_removeItem:(id)a0;
- (void)_replaceStaleTypingMessage;
- (void)assignSortIDsToItems:(id)a0;
- (void)assignSortIDsToItems:(id)a0 shouldRecalculateSortIDForAllMessages:(BOOL)a1;
- (BOOL)_shouldPinUnsentMessagesToBottom;
- (id)_initWithItems:(id)a0;
- (void)_itemsDidChange:(id)a0;
- (void)_handleItem:(id)a0 forChatStyle:(unsigned char)a1;
- (void)_replaceItems:(id)a0;
- (void)_replaceAndSortItemsWithUnsortedItems:(id)a0;
- (void)_resortItems;
- (void)_setSortID:(id)a0;
- (id)_itemForGUID:(id)a0;
- (id)_typingMessage;
- (id)_firstMessage;
- (id)_lastMessage;
- (id)_lastSentMessage;
- (id)_lastFinishedMessage;
- (id)_lastIncomingMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (id)_lastIncomingMessageBlockWithTextContent;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)a0;
- (id)_appendArchivedItemsToItemsArray:(id)a0;
- (BOOL)_trimIfNeeded;
- (void)_didReplaceItem:(struct __CFArray { } *)a0 oldItem:(id)a1 idx:(long long)a2;

@end
