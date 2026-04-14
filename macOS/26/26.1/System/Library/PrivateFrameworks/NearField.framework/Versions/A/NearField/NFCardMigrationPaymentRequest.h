@class NSArray, NSString, NSData, NSDate;

@interface NFCardMigrationPaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSArray *passInfos;
@property (retain, nonatomic) NSData *merchantData;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDate *transactionDate;
@property (nonatomic) unsigned int unpredictableNumber;
@property (retain, nonatomic) NSData *networkMerchantIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
