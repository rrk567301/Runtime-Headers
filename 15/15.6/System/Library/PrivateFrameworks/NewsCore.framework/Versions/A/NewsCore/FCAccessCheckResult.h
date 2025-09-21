@interface FCAccessCheckResult : NSObject <NSCopying>

@property (readonly, nonatomic) char canAccess;
@property (readonly, nonatomic) unsigned long long blockedReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCanAccess:(char)a0 blockedReason:(unsigned long long)a1;

@end
