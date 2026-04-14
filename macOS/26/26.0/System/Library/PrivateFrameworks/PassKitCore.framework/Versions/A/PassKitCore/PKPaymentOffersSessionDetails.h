@class NSDecimalNumber, NSString, NSArray, PKPaymentOffersSessionTransactionDetails, NSSet, NSNumber, PKCurrencyAmount;

@interface PKPaymentOffersSessionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long context;
@property (readonly, copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, nonatomic) long long payLaterSuppressionMode;
@property (readonly, nonatomic) BOOL shouldUseMerchantSession;
@property (readonly, copy, nonatomic) NSString *merchantIdentifier;
@property (readonly, copy, nonatomic) NSString *originURL;
@property (readonly, copy, nonatomic) NSString *webMerchantIdentifier;
@property (readonly, copy, nonatomic) NSString *webMerchantName;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) unsigned long long merchantCategoryCode;
@property (readonly, copy, nonatomic) NSNumber *adamIdentifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *passUniqueID;
@property (readonly, nonatomic) PKPaymentOffersSessionTransactionDetails *transactionDetails;
@property (retain, nonatomic) NSSet *merchandisingOfferIdentifiers;
@property (retain, nonatomic) PKCurrencyAmount *userEnteredAmount;

- (id)initWithContext:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)httpDictionaryRepresentation;
- (id)initForInstoreConextWithPassUniqueID:(id)a0;
- (id)initForPostPurchaseInstallmentsWithTransaction:(id)a0 userEnteredAmount:(id)a1;
- (id)initForWalletProvisioning;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 merchantCountryCode:(id)a2 merchantIdentifier:(id)a3 originURL:(id)a4 webMerchantIdentifier:(id)a5 webMerchantName:(id)a6 merchantName:(id)a7 adamIdentifier:(id)a8 shouldUseMerchantSession:(BOOL)a9 merchantCategoryCode:(short)a10 supportedNetworks:(id)a11 merchantCapabilities:(unsigned long long)a12 payLaterSuppressionMode:(long long)a13 options:(unsigned long long)a14;
- (void)removeTransactionAmount;
- (void)updateCurrencyCode:(id)a0;
- (void)updateMerchantIdentifier:(id)a0 originURL:(id)a1 webMerchantIdentifier:(id)a2 webMerchantName:(id)a3;
- (void)updateTransactionAmount:(id)a0;

@end
