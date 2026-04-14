@class NSString, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;

@interface FCFeedPersonalizer : NSObject <FCFeedPersonalizing>

@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;
@property (copy, nonatomic) id<FCTodayPrivateData> todayData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_userProfile;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (double)decayedPublisherDiversificationPenalty;
- (id)initWithPersonalizationTreatment:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 todayData:(id)a2;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (void)prepareFavoritesWithCompletionHandler:(id /* block */)a0;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (unsigned long long)whitelistLevelForTagID:(id)a0;

@end
