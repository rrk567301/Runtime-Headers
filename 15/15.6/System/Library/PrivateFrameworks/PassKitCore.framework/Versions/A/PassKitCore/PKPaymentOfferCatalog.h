@class NSSet, NSDate;

@interface PKPaymentOfferCatalog : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSSet *catalog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualIgnoringLastUpdatedDate:(id)a0;
- (char)isFresh;
- (id)criteriaWithType:(unsigned long long)a0 passUniqueID:(id)a1;
- (char)isFreshForNow:(id)a0;

@end
