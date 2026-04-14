@class UnifiedTabBarItem;

@interface UnifiedTabBarContainerIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) UnifiedTabBarItem *mainTabBarItem;
@property (readonly, nonatomic) UnifiedTabBarItem *firstChildItem;
@property (readonly, nonatomic) UnifiedTabBarItem *lastChildItem;
@property (readonly, nonatomic) BOOL isSingleTabBarItemContainer;
@property (readonly, nonatomic) BOOL isPinned;

+ (id)identifierWithPinnedTabBarItem:(id)a0;
+ (id)identifierWithFirstChildItem:(id)a0 lastChildItem:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithMainTabBarItem:(id)a0 firstChildItem:(id)a1 lastChildItem:(id)a2;
- (BOOL)isLastTabBarItemInContainer:(id)a0;

@end
