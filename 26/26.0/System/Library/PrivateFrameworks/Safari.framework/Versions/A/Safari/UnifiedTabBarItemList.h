@class NSArray, NSSet;

@interface UnifiedTabBarItemList : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *tabBarItems;
@property (readonly, copy, nonatomic) NSSet *allTabBarItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsTabBarItem:(id)a0;
- (void)enumerateTabBarItemsInOrderUsingBlock:(id /* block */)a0;
- (id)initWithTabBarItems:(id)a0;
- (BOOL)supportsInteractiveTabClosingWithPreviousList:(id)a0;

@end
