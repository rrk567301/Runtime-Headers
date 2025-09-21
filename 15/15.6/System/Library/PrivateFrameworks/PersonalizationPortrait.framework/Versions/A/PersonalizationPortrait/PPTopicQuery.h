@class NSSet, NSString, NSDate;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char scoreWithCalibration;
@property (nonatomic) unsigned long long minimumComponentCount;
@property (retain, nonatomic) NSSet *matchingAlgorithms;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (retain, nonatomic) NSString *matchingTopicTrie;
@property (nonatomic) char orderByIdentifier;
@property (nonatomic) char removeNearDuplicates;
@property (nonatomic) char filterByRelevanceDate;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (retain, nonatomic) NSSet *matchingGroupIds;
@property (retain, nonatomic) NSSet *matchingDocumentIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) char overrideDecayRate;
@property (nonatomic) double decayRate;
@property (nonatomic) char scoreWithBiases;
@property (retain, nonatomic) NSSet *matchingTopicIds;
@property (retain, nonatomic) NSSet *matchingMappedTopicIds;
@property (nonatomic) char scoreWithStrictFiltering;
@property (nonatomic) char excludeWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)_algorithmsDescription:(id)a0;
+ (id)queryForCSSearchableItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customizedDescription;
- (char)isEqualToTopicQuery:(id)a0;

@end
