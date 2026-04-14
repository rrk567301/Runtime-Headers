@interface LACACMPoolInfo : NSObject

@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) long long used;
@property (readonly, nonatomic) long long free;
@property (readonly, nonatomic) long long freeForLA;
@property (readonly, nonatomic) long long reservedForACM;
@property (readonly, nonatomic) long long reservedForLA;

- (id)description;
- (id)initWithSize:(long long)a0 used:(long long)a1;

@end
