@class NSSet, NSDate;

@interface PKPaymentOfferCatalog : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSSet *catalog;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic) double proactiveFetchPeriod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualIgnoringLastUpdatedDate:(id)a0;
- (id)capabilityForPassUniqueID:(id)a0;
- (id)criteriaWithIdentifier:(id)a0;
- (id)criteriaWithType:(unsigned long long)a0 passUniqueID:(id)a1;
- (id)eligibleMerchandisingIdentifiersForPassUniqueIDs:(id)a0;
- (id)eligibleMerchandisingIdentifiersThatNeedProvisioning;
- (BOOL)isOutOfDate;

@end
