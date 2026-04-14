@class NSSet, NSString, NSDate;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long consumer;
@property (nonatomic) BOOL orderByAscendingDate;
@property (nonatomic) BOOL filterByRelevanceDate;
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
@property (nonatomic) BOOL excludingWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)queryForMapsWithLimit:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;
+ (id)_algorithmsDescription:(id)a0;
+ (id)_matchingCategoriesDescription:(id)a0;

- (id)customizedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLocationQuery:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
