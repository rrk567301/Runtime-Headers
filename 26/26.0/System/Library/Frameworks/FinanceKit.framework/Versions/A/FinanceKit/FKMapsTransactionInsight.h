@class FKPaymentTransactionCategoryAndSource, FKMapsBrand, FKMapsMerchant, NSDate;

@interface FKMapsTransactionInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *updatedAt;
@property (nonatomic) unsigned long long fallbackCategory;
@property (nonatomic) long long category;
@property (copy, nonatomic) FKPaymentTransactionCategoryAndSource *categoryAndSource;
@property (copy, nonatomic) FKMapsMerchant *merchant;
@property (copy, nonatomic) FKMapsBrand *brand;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdatedAt:(id)a0 fallbackCategory:(unsigned long long)a1 merchant:(id)a2 brand:(id)a3;
- (id)initWithUpdatedAt:(id)a0 category:(long long)a1 merchant:(id)a2 brand:(id)a3;
- (id)initWithUpdatedAt:(id)a0 categoryAndSource:(id)a1 merchant:(id)a2 brand:(id)a3;

@end
