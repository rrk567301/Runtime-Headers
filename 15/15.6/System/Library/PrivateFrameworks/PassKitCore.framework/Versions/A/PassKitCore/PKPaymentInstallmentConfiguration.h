@class NSDecimalNumber, NSString, NSArray, NSData, NSDictionary;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long feature;
@property (copy, nonatomic) NSData *merchandisingImageData;
@property (retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount;
@property (retain, nonatomic) NSDecimalNumber *bindingTotalAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, getter=isInStorePurchase) char inStorePurchase;
@property (copy, nonatomic) NSString *installmentMerchantIdentifier;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (copy, nonatomic) NSArray *installmentItems;
@property (copy, nonatomic) NSDictionary *applicationMetadata;
@property (nonatomic) long long retailChannel;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeToBodyDictionary:(id)a0;
- (char)isEqualToInstallmentConfiguration:(id)a0;

@end
