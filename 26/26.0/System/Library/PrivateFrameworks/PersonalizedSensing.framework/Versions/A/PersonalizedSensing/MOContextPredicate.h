@class NSData, NSDictionary, NSSet;

@interface MOContextPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *fetchRequestPredicate;
@property (retain) NSDictionary *filterCriteriaMap;
@property (retain) NSSet *metadataTypes;

+ (id)contextPredicateForContextType:(unsigned long long)a0 withMetadata:(id)a1 startDate:(id)a2 endDate:(id)a3;
+ (id)contextPredicateForContextType:(unsigned long long)a0 withMetadata:(id)a1 startDate:(id)a2 endDate:(id)a3 aroundLocation:(id)a4 withDistanceThreshold:(double)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 filter:(id)a1 metadataTypes:(id)a2;

@end
