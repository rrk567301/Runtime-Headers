@interface _HDProtectedDataOperationTransitionContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long oldState;
@property (readonly, nonatomic) long long newState;
@property (readonly, nonatomic) char hasNewState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)copyWithNewState:(long long)a0;
- (id)initWithOldState:(long long)a0 newState:(long long)a1;

@end
