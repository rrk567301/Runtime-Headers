@class NSDecimalNumber, NSString, NSSet, NSArray, NSData;

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSDecimalNumber *exchangeRate;
@property (readonly, copy, nonatomic) NSDecimalNumber *sendAmount;
@property (readonly, copy, nonatomic) NSString *sendAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *receiveAmount;
@property (readonly, copy, nonatomic) NSString *receiveAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalAmount;
@property (readonly, copy, nonatomic) NSString *totalAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *fees;
@property (readonly, copy, nonatomic) NSString *feesCurrency;
@property (readonly, copy, nonatomic) NSString *dpanIdentifier;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSSet *supportedFundingSourceCountryCodes;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, copy, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, copy, nonatomic) NSData *nonce;
@property (readonly, nonatomic) char preservesCurrentBalance;

+ (id)quoteItemWithDictionary:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
