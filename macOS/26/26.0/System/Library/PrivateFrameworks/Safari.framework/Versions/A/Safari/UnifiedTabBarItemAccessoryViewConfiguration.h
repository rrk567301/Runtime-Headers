@interface UnifiedTabBarItemAccessoryViewConfiguration : NSObject <NSCopying>

@property (class, readonly, nonatomic) UnifiedTabBarItemAccessoryViewConfiguration *defaultConfiguration;

@property (readonly, nonatomic) float visibilityPriority;
@property (readonly, nonatomic) unsigned long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithVisibilityPriority:(float)a0 options:(unsigned long long)a1;

@end
