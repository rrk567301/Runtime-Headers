@class UnifiedTabBarItem;

@interface UnifiedTabBarContainerIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) UnifiedTabBarItem *mainTabBarItem;
@property (readonly, nonatomic) UnifiedTabBarItem *firstChildItem;
@property (readonly, nonatomic) UnifiedTabBarItem *lastChildItem;
@property (readonly, nonatomic) BOOL isSingleTabBarItemContainer;
@property (readonly, nonatomic) BOOL isPinned;

+ (id)identifierWithPinnedTabBarItem:(id)a0;
+ (id)identifierWithFirstChildItem:(id)a0 lastChildItem:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithMainTabBarItem:(id)a0 firstChildItem:(id)a1 lastChildItem:(id)a2;
- (BOOL)isLastTabBarItemInContainer:(id)a0;

@end
