@class NSString, NSArray, PKPaymentOfferDynamicContent, NSDate;

@interface PKPaymentOfferMerchandisingOffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *primaryTitle;
@property (readonly, copy, nonatomic) NSString *secondaryTitleIdentifier;
@property (readonly, copy, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSArray *installments;
@property (readonly, copy, nonatomic) NSArray *rewards;
@property (readonly, copy, nonatomic) NSArray *other;
@property (readonly, copy, nonatomic) NSDate *lastUpdated;

+ (id)analyticsDictionaryForOffer:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)allIdentifiers;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)secondaryOfferItem;

@end
