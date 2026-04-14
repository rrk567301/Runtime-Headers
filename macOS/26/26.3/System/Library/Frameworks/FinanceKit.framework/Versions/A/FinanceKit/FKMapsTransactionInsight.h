@class FKPaymentTransactionCategoryAndSource, FKMapsBrand, FKMapsMerchant, NSDate;

@interface FKMapsTransactionInsight : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) unsigned long long fallbackCategory;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) FKPaymentTransactionCategoryAndSource *categoryAndSource;
@property (readonly, copy, nonatomic) FKMapsMerchant *merchant;
@property (readonly, copy, nonatomic) FKMapsBrand *brand;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUpdatedAt:(id)a0 fallbackCategory:(unsigned long long)a1 merchant:(id)a2 brand:(id)a3;
- (id)initWithUpdatedAt:(id)a0 category:(long long)a1 merchant:(id)a2 brand:(id)a3;
- (id)initWithUpdatedAt:(id)a0 categoryAndSource:(id)a1 merchant:(id)a2 brand:(id)a3;

@end
