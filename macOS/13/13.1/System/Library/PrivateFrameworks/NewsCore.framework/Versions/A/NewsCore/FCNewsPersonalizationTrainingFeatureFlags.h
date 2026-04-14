@class NSNumber;

@interface FCNewsPersonalizationTrainingFeatureFlags : NSObject

@property (nonatomic) BOOL enableSingleLifetimeSeenEventPerArticle;
@property (nonatomic) BOOL enableSyntheticTagFollowEvents;
@property (nonatomic) long long readingHistoryItemCountToProcess;
@property (retain, nonatomic) NSNumber *uniqueAggregateLimit;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
