@class NSSet, NSString, NSDate;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long consumer;
@property (nonatomic) char orderByAscendingDate;
@property (nonatomic) char filterByRelevanceDate;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) double perRecordDecayRate;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSString *fuzzyMatchingString;
@property (retain, nonatomic) NSSet *matchingCategories;
@property (retain, nonatomic) NSSet *matchingAlgorithms;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (nonatomic) char excludingWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)_matchingCategoriesDescription:(id)a0;
+ (id)_algorithmsDescription:(id)a0;
+ (id)queryForMapsWithLimit:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customizedDescription;
- (char)isEqualToLocationQuery:(id)a0;

@end
