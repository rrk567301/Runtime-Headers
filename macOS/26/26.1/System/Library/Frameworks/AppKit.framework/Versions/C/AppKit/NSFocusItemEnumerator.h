@class NSMapTable, NSMutableSet, NSMutableArray;
@protocol UIFocusItem;

@interface NSFocusItemEnumerator : NSEnumerator

@property (retain) NSMutableSet *visitedItems;
@property (retain) NSMutableArray *history;
@property (retain) id<UIFocusItem> head;
@property (getter=isDone) BOOL done;
@property (readonly) id<UIFocusItem> groupingItem;
@property (readonly, copy) NSMapTable *routes;

- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;
- (id)_exceptionWithFormat:(id)a0;
- (id)initWithGroupingItem:(id)a0 routes:(id)a1;

@end
