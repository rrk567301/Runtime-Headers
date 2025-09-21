@class NSString, PKServiceProviderPurchaseData, NSArray, NSDate;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *visibleTransactionIdentifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *regionIdentifier;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData;
@property (copy, nonatomic) NSDate *purchaseDate;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *partnerMetadata;
@property (copy, nonatomic) NSArray *actions;

+ (id)purchaseWithDictionary:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToServiceProviderPurchase:(id)a0;

@end
