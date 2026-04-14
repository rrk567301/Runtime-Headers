@class NSMapTable;

@interface _UIFocusGroupHistory : NSObject {
    NSMapTable *_groupToItemMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)_uiktest_clearHistory;
- (id)lastFocusedItemForGroupIdentifier:(id)a0;
- (void)setLastFocusedItem:(id)a0 forGroupIdentifier:(id)a1;

@end
