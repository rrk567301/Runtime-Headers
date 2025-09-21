@class NSDecimalNumber, NSString, NSURL, NSDate, NSNumber, CLLocation;

@interface FKApplePayTransactionInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantRawName;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSNumber *industryCode;
@property (copy, nonatomic) NSString *merchantType;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *terminalIdentifier;
@property (copy, nonatomic) NSString *merchantAdditionalData;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSNumber *isMerchantTokenTransaction;
@property (copy, nonatomic) NSNumber *isCoarseLocation;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *merchantRawCANL;
@property (copy, nonatomic) NSString *merchantRawCity;
@property (copy, nonatomic) NSString *merchantRawState;
@property (copy, nonatomic) NSString *merchantRawCountry;
@property (copy, nonatomic) NSString *merchantCity;
@property (copy, nonatomic) NSString *merchantZip;
@property (copy, nonatomic) NSString *merchantState;
@property (copy, nonatomic) NSNumber *merchantCleanConfidenceLevel;
@property (copy, nonatomic) NSDecimalNumber *rewardsAmount;
@property (copy, nonatomic) NSString *rewardsCurrency;
@property (copy, nonatomic) NSNumber *rewardsEligibilityReason;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSURL *webURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (copy, nonatomic) NSNumber *isIssuerInstallmentTransaction;
@property (copy, nonatomic) NSURL *issuerInstallmentManagementURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentHash:(id)a0 transactionDate:(id)a1 merchantName:(id)a2 merchantRawName:(id)a3 industryCategory:(id)a4 industryCode:(id)a5 merchantType:(id)a6 merchantCountryCode:(id)a7 terminalIdentifier:(id)a8 merchantAdditionalData:(id)a9 paymentNetwork:(id)a10 isMerchantTokenTransaction:(id)a11 isCoarseLocation:(id)a12 location:(id)a13 merchantIdentifier:(id)a14 merchantRawCANL:(id)a15 merchantRawCity:(id)a16 merchantRawState:(id)a17 merchantRawCountry:(id)a18 merchantCity:(id)a19 merchantZip:(id)a20 merchantState:(id)a21 merchantCleanConfidenceLevel:(id)a22 rewardsAmount:(id)a23 rewardsCurrency:(id)a24 rewardsEligibilityReason:(id)a25 adamIdentifier:(id)a26 webURL:(id)a27 webMerchantIdentifier:(id)a28 webMerchantName:(id)a29 isIssuerInstallmentTransaction:(id)a30 issuerInstallmentManagementURL:(id)a31;
- (id)initWithPaymentHash:(id)a0 transactionDate:(id)a1 merchantName:(id)a2 merchantRawName:(id)a3 industryCategory:(id)a4 industryCode:(id)a5 merchantType:(id)a6 merchantCountryCode:(id)a7 terminalIdentifier:(id)a8 merchantAdditionalData:(id)a9 paymentNetwork:(id)a10 isMerchantTokenTransaction:(id)a11 isCoarseLocation:(id)a12 location:(id)a13 merchantIdentifier:(id)a14 merchantRawCANL:(id)a15 merchantRawCity:(id)a16 merchantRawState:(id)a17 merchantRawCountry:(id)a18 merchantCity:(id)a19 merchantZip:(id)a20 merchantState:(id)a21 merchantCleanConfidenceLevel:(id)a22 rewardsAmount:(id)a23 rewardsCurrency:(id)a24 rewardsEligibilityReason:(id)a25 adamIdentifier:(id)a26 webURL:(id)a27 webMerchantIdentifier:(id)a28 webMerchantName:(id)a29;

@end
