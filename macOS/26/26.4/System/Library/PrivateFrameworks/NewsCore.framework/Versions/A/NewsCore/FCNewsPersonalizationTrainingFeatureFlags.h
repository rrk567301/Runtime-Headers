@class NSNumber;

@interface FCNewsPersonalizationTrainingFeatureFlags : NSObject

@property (nonatomic) BOOL enableSingleLifetimeSeenEventPerArticle;
@property (nonatomic) BOOL enableSyntheticTagFollowEvents;
@property (nonatomic) long long readingHistoryItemCountToProcess;
@property (retain, nonatomic) NSNumber *uniqueAggregateLimit;
@property (retain, nonatomic) NSNumber *eventLimit;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
