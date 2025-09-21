@class NSString, NSArray, PKContact, NSData;

@interface PKDisbursementRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (copy, nonatomic) NSArray *summaryItems;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSArray *requiredRecipientContactFields;
@property (retain, nonatomic) PKContact *recipientContact;
@property (copy, nonatomic) NSArray *supportedRegions;
@property (copy, nonatomic) NSData *applicationData;

+ (id)disbursementCardUnsupportedError;
+ (id)disbursementContactInvalidErrorWithContactField:(id)a0 localizedDescription:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMerchantIdentifier:(id)a0 currencyCode:(id)a1 regionCode:(id)a2 supportedNetworks:(id)a3 merchantCapabilities:(unsigned long long)a4 summaryItems:(id)a5;
- (BOOL)isEqualToDisbursementRequest:(id)a0;

@end
