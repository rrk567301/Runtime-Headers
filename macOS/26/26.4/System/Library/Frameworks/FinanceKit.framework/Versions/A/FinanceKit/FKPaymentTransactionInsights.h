@class FKApplePayTransactionInsight, FKContactTransactionInsight, FKMapsTransactionInsight, FKBankMerchantInformationInsight, FKUserTransactionInsight;

@interface FKPaymentTransactionInsights : NSObject <NSCopying>

@property (readonly, copy, nonatomic) FKApplePayTransactionInsight *applePayInsight;
@property (readonly, copy, nonatomic) FKBankMerchantInformationInsight *bankMerchantInformationInsight;
@property (readonly, copy, nonatomic) FKMapsTransactionInsight *mapsInsight;
@property (readonly, copy, nonatomic) FKContactTransactionInsight *contactInsight;
@property (readonly, copy, nonatomic) FKUserTransactionInsight *userInsight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithApplePayInsight:(id)a0 bankMerchantInformationInsight:(id)a1 mapsInsight:(id)a2 contactInsight:(id)a3 userInsight:(id)a4;
- (id)initWithApplePayInsight:(id)a0 bankMerchantInformationInsight:(id)a1 mapsInsight:(id)a2 contactInsight:(id)a3;

@end
