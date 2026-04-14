@class NSDecimalNumber, NSString, NSNumber;

@interface PKPayLaterFinancingControllerConfiguration : NSObject

@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (nonatomic) BOOL isMerchantTokenRequest;
@property (nonatomic) BOOL isMultiTokenRequest;
@property (readonly, nonatomic) unsigned long long channel;
@property (readonly, nonatomic) unsigned long long channelType;

- (void).cxx_destruct;
- (id)initWithCurrencyCode:(id)a0 channel:(unsigned long long)a1;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 merchantIdentifier:(id)a2 originURL:(id)a3 webMerchantIdentifier:(id)a4 webMerchantName:(id)a5 merchantName:(id)a6 adamIdentifier:(id)a7 isMerchantTokenRequest:(BOOL)a8 isMultiTokenRequest:(BOOL)a9 channel:(unsigned long long)a10 channelType:(unsigned long long)a11;
- (void)updateTransactionAmount:(id)a0;
- (void)updateMerchantIdentifier:(id)a0 originURL:(id)a1 webMerchantIdentifier:(id)a2 webMerchantName:(id)a3;

@end
