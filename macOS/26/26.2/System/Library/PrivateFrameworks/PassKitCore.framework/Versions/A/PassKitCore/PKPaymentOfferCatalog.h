@class NSSet, NSDate;

@interface PKPaymentOfferCatalog : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSSet *catalog;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic) double proactiveFetchPeriod;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualIgnoringLastUpdatedDate:(id)a0;
- (id)capabilityForPassUniqueID:(id)a0;
- (id)criteriaWithIdentifier:(id)a0;
- (id)criteriaWithType:(unsigned long long)a0 passUniqueID:(id)a1;
- (id)eligibleMerchandisingIdentifiersForPassUniqueIDs:(id)a0;
- (id)eligibleMerchandisingIdentifiersThatNeedProvisioning;
- (BOOL)isOutOfDate;

@end
