@class NSDecimalNumber, NSString, NSURL, NSDate, NSNumber, CLLocation;

@interface FKApplePayTransactionInsight : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *paymentHash;
@property (readonly, copy, nonatomic) NSDate *transactionDate;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, copy, nonatomic) NSString *merchantRawName;
@property (readonly, copy, nonatomic) NSString *industryCategory;
@property (readonly, copy, nonatomic) NSNumber *industryCode;
@property (readonly, copy, nonatomic) NSString *merchantType;
@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, copy, nonatomic) NSString *terminalIdentifier;
@property (readonly, copy, nonatomic) NSString *merchantAdditionalData;
@property (readonly, copy, nonatomic) NSString *paymentNetwork;
@property (readonly, copy, nonatomic) NSNumber *isMerchantTokenTransaction;
@property (readonly, copy, nonatomic) NSNumber *isCoarseLocation;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSString *merchantIdentifier;
@property (readonly, copy, nonatomic) NSString *merchantRawCANL;
@property (readonly, copy, nonatomic) NSString *merchantRawCity;
@property (readonly, copy, nonatomic) NSString *merchantRawState;
@property (readonly, copy, nonatomic) NSString *merchantRawCountry;
@property (readonly, copy, nonatomic) NSString *merchantCity;
@property (readonly, copy, nonatomic) NSString *merchantZip;
@property (readonly, copy, nonatomic) NSString *merchantState;
@property (readonly, copy, nonatomic) NSNumber *merchantCleanConfidenceLevel;
@property (readonly, copy, nonatomic) NSDecimalNumber *rewardsAmount;
@property (readonly, copy, nonatomic) NSString *rewardsCurrency;
@property (readonly, copy, nonatomic) NSNumber *rewardsEligibilityReason;
@property (readonly, copy, nonatomic) NSNumber *adamIdentifier;
@property (readonly, copy, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSString *webMerchantIdentifier;
@property (readonly, copy, nonatomic) NSString *webMerchantName;
@property (readonly, copy, nonatomic) NSNumber *isIssuerInstallmentTransaction;
@property (readonly, copy, nonatomic) NSURL *issuerInstallmentManagementURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPaymentHash:(id)a0 transactionDate:(id)a1 merchantName:(id)a2 merchantRawName:(id)a3 industryCategory:(id)a4 industryCode:(id)a5 merchantType:(id)a6 merchantCountryCode:(id)a7 terminalIdentifier:(id)a8 merchantAdditionalData:(id)a9 paymentNetwork:(id)a10 isMerchantTokenTransaction:(id)a11 isCoarseLocation:(id)a12 location:(id)a13 merchantIdentifier:(id)a14 merchantRawCANL:(id)a15 merchantRawCity:(id)a16 merchantRawState:(id)a17 merchantRawCountry:(id)a18 merchantCity:(id)a19 merchantZip:(id)a20 merchantState:(id)a21 merchantCleanConfidenceLevel:(id)a22 rewardsAmount:(id)a23 rewardsCurrency:(id)a24 rewardsEligibilityReason:(id)a25 adamIdentifier:(id)a26 webURL:(id)a27 webMerchantIdentifier:(id)a28 webMerchantName:(id)a29 isIssuerInstallmentTransaction:(id)a30 issuerInstallmentManagementURL:(id)a31;
- (id)initWithPaymentHash:(id)a0 transactionDate:(id)a1 merchantName:(id)a2 merchantRawName:(id)a3 industryCategory:(id)a4 industryCode:(id)a5 merchantType:(id)a6 merchantCountryCode:(id)a7 terminalIdentifier:(id)a8 merchantAdditionalData:(id)a9 paymentNetwork:(id)a10 isMerchantTokenTransaction:(id)a11 isCoarseLocation:(id)a12 location:(id)a13 merchantIdentifier:(id)a14 merchantRawCANL:(id)a15 merchantRawCity:(id)a16 merchantRawState:(id)a17 merchantRawCountry:(id)a18 merchantCity:(id)a19 merchantZip:(id)a20 merchantState:(id)a21 merchantCleanConfidenceLevel:(id)a22 rewardsAmount:(id)a23 rewardsCurrency:(id)a24 rewardsEligibilityReason:(id)a25 adamIdentifier:(id)a26 webURL:(id)a27 webMerchantIdentifier:(id)a28 webMerchantName:(id)a29;

@end
