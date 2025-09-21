@class NSString, NSSet, NSDate;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *matchingEntityTrie;
@property (nonatomic) unsigned long long locationConsumer;
@property (nonatomic) char orderByName;
@property (nonatomic) char orderByAscendingDate;
@property (nonatomic) char removeNearDuplicates;
@property (nonatomic) char isForRecordMonitoring;
@property (nonatomic) char filterByRelevanceDate;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (retain, nonatomic) NSSet *matchingSourceGroupIds;
@property (retain, nonatomic) NSSet *matchingSourceDocumentIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) char overrideDecayRate;
@property (nonatomic) double decayRate;
@property (copy, nonatomic) NSString *matchingName;
@property (copy, nonatomic) NSSet *matchingNames;
@property (nonatomic) char matchCategory;
@property (retain, nonatomic) NSSet *matchingCategories;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (nonatomic) char excludeWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)_matchingCategoriesDescription:(id)a0;
+ (id)_excludingAlgorithmsDescription:(id)a0;
+ (id)locationQueryWithLimit:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyForMonitoring;
- (id)customizedDescription;
- (char)isEqualToNamedEntityQuery:(id)a0;

@end
