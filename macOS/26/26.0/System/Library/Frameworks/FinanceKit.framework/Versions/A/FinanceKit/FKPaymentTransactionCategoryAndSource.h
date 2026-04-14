@interface FKPaymentTransactionCategoryAndSource : NSObject <NSCopying>

@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) long long source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCategory:(long long)a0 source:(long long)a1;

@end
