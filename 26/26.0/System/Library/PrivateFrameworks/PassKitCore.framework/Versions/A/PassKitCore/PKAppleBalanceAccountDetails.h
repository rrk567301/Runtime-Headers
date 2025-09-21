@class NSString, PKAppleBalanceAccountSummary, NSDate, PKCurrencyAmount;

@interface PKAppleBalanceAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) PKAppleBalanceAccountSummary *accountSummary;
@property (readonly, nonatomic) PKCurrencyAmount *currentBalance;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCloudRecord:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudRecord:(id)a0;

@end
