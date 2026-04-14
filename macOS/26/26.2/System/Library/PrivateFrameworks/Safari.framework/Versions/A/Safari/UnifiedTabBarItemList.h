@class NSArray, NSSet;

@interface UnifiedTabBarItemList : NSObject <NSCopying> {
    NSSet *_pinnedTabBarItems;
}

@property (readonly, copy, nonatomic) NSArray *tabBarItems;
@property (readonly, copy, nonatomic) NSSet *allTabBarItems;
@property (readonly, nonatomic) unsigned long long numberOfTabViewItems;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (unsigned long long)_numberOfLeafItems;
- (BOOL)containsTabBarItem:(id)a0;
- (void)enumerateTabBarItemsInOrderUsingBlock:(id /* block */)a0;
- (id)initWithTabBarItems:(id)a0;
- (BOOL)isTabBarItemPinned:(id)a0;
- (BOOL)supportsInteractiveTabClosingWithPreviousList:(id)a0;

@end
