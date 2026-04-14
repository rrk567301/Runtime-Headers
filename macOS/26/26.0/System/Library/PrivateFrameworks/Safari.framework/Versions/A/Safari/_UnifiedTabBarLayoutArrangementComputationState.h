@class UnifiedTabBarItem, NSMapTable, NSMutableSet, NSMutableOrderedSet;

@interface _UnifiedTabBarLayoutArrangementComputationState : NSObject {
    NSMutableOrderedSet *_arrangedTabBarItems;
    NSMutableOrderedSet *_arrangedPinnedTabBarItems;
    NSMutableOrderedSet *_containerIdentifiers;
    NSMapTable *_tabBarItemsToContainerIdentifiers;
    NSMutableSet *_currentNoiseGroup;
    UnifiedTabBarItem *_firstItemInCurrentNoiseGroup;
    UnifiedTabBarItem *_lastItemInCurrentNoiseGroup;
    BOOL _didFindUnpinnedTab;
}

- (id)init;
- (void).cxx_destruct;

@end
