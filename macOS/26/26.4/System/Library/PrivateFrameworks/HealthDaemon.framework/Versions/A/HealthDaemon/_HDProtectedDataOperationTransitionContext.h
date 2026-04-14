@interface _HDProtectedDataOperationTransitionContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long oldState;
@property (readonly, nonatomic) long long newState;
@property (readonly, nonatomic) BOOL hasNewState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithNewState:(long long)a0;
- (id)initWithOldState:(long long)a0 newState:(long long)a1;

@end
