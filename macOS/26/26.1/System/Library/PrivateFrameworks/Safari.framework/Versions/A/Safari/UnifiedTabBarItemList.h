@class NSArray, NSSet;

@interface UnifiedTabBarItemList : NSObject <NSCopying> {
    NSSet *_pinnedTabBarItems;
}

@property (readonly, copy, nonatomic) NSArray *tabBarItems;
@property (readonly, copy, nonatomic) NSSet *allTabBarItems;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)containsTabBarItem:(id)a0;
- (void)enumerateTabBarItemsInOrderUsingBlock:(id /* block */)a0;
- (id)initWithTabBarItems:(id)a0;
- (BOOL)isTabBarItemPinned:(id)a0;
- (BOOL)supportsInteractiveTabClosingWithPreviousList:(id)a0;

@end
