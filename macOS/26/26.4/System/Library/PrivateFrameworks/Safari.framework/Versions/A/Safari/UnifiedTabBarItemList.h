@class NSArray, NSSet;

@interface UnifiedTabBarItemList : NSObject <NSCopying> {
    NSSet *_pinnedTabBarItems;
}

@property (readonly, copy, nonatomic) NSArray *tabBarItems;
@property (readonly, copy, nonatomic) NSSet *allTabBarItems;
@property (readonly, nonatomic) unsigned long long numberOfTabViewItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)_numberOfLeafItems;
- (BOOL)containsTabBarItem:(id)a0;
- (void)enumerateTabBarItemsInOrderUsingBlock:(id /* block */)a0;
- (id)initWithTabBarItems:(id)a0;
- (BOOL)isTabBarItemPinned:(id)a0;
- (BOOL)supportsInteractiveTabClosingWithPreviousList:(id)a0;

@end
