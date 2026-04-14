@class NSDate;

@interface FKUserTransactionInsight : NSObject <NSCopying>

@property (readonly, nonatomic) long long transactionCategory;
@property (readonly, copy, nonatomic) NSDate *updatedAt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTransactionCategory:(long long)a0 updatedAt:(id)a1;

@end
