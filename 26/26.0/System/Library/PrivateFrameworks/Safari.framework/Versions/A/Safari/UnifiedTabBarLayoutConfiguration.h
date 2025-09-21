@class UnifiedTabBarItem, NSSet, NSOrderedSet, NSMapTable, UnifiedTabBarItemList;

@interface UnifiedTabBarLayoutConfiguration : NSObject <NSCopying> {
    BOOL _cacheNeedsRefresh;
}

@property (copy, nonatomic) UnifiedTabBarItemList *tabBarItemList;
@property (retain, nonatomic) UnifiedTabBarItem *activeTabBarItem;
@property (copy, nonatomic) NSSet *selectedTabBarItems;
@property (nonatomic) unsigned long long numberOfTabsForInteractiveTabClosing;
@property (retain, nonatomic) UnifiedTabBarItem *draggedTabBarItem;
@property (nonatomic) unsigned long long dropIndex;
@property (retain, nonatomic) UnifiedTabBarItem *dropLocationPlaceholder;
@property (nonatomic) struct CGPoint { double x; double y; } mouseDragLocation;
@property (nonatomic) struct CGPoint { double x; double y; } buttonDragAnchorPoint;
@property (nonatomic) unsigned long long layoutOptions;
@property (nonatomic) BOOL showOnlyActiveTab;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tabBarBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titlebarMainContentLayoutFrameForCentering;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollViewClipViewBounds;
@property (nonatomic) double scrollViewDocumentViewWidth;
@property (retain, nonatomic) UnifiedTabBarItem *tabBarItemScrollTarget;
@property (readonly, copy, nonatomic) NSOrderedSet *arrangedTabBarItems;
@property (readonly, copy, nonatomic) NSOrderedSet *arrangedPinnedTabBarItems;
@property (readonly, copy, nonatomic) NSSet *draggedTabBarItems;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly, nonatomic) unsigned long long numberOfPinnedTabs;
@property (readonly, nonatomic) unsigned long long numberOfUnpinnedTabs;
@property (readonly, nonatomic) unsigned long long activeTabBarItemIndex;
@property (readonly, nonatomic) BOOL hasActiveTab;
@property (readonly, nonatomic) BOOL isActiveTabDragged;
@property (readonly, nonatomic) BOOL isActiveTabPinned;
@property (readonly, nonatomic) BOOL isActiveTabUnpinned;
@property (readonly, copy, nonatomic) NSOrderedSet *arrangedContainerIdentifiers;
@property (readonly, copy, nonatomic) NSMapTable *tabBarItemsToContainerIdentifiers;
@property (readonly, nonatomic) unsigned long long activeTabBarItemPositionInContainer;
@property (readonly, nonatomic) unsigned long long containerPositionForActiveTabBarItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)containerPositionForTabBarItem:(id)a0;
- (void)_appendDropItemIfNeededUsingState:(id)a0;
- (void)_appendNoiseGroupContainerIfNeededUsingState:(id)a0;
- (void)_appendNoiseItem:(id)a0 usingState:(id)a1;
- (BOOL)_appendVisibleItemIfNotDragged:(id)a0 usingState:(id)a1;
- (void)_computeArrangementIfNeeded;
- (id)containerIdentifierForTabBarItem:(id)a0;
- (BOOL)isTabBarItemInActiveTabBarItemContainer:(id)a0;
- (unsigned long long)tabBarItemPositionInContainer:(id)a0;

@end
