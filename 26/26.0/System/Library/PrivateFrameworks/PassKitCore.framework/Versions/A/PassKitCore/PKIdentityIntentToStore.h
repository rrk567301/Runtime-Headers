@interface PKIdentityIntentToStore : NSObject <NSCopying>

@property (class, readonly, nonatomic) PKIdentityIntentToStore *willNotStoreIntent;
@property (class, readonly, nonatomic) PKIdentityIntentToStore *mayStoreIntent;

+ (id)mayStoreIntentForDays:(long long)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;

@end
