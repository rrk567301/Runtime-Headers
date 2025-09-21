@class FCDerivedPersonalizationData, NSString, NSArray, NSData, NSSet, NSDictionary, NSNumber, FCBundleSubscription;

@interface NTTodayPrivateData : NSObject <FCTodayPrivateData>

@property (readonly, copy, nonatomic) FCDerivedPersonalizationData *derivedPersonalizationData;
@property (readonly, copy, nonatomic) NSString *localNewsTagID;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscriptionDates;
@property (readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly, copy, nonatomic) NSData *userEmbeddingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDerivedPersonalizationData:(id)a0 localNewsTagID:(id)a1 mutedTagIDs:(id)a2 autoFavoriteTagIDs:(id)a3 purchasedTagIDs:(id)a4 groupableTagIDs:(id)a5 rankedAllSubscribedTagIDs:(id)a6 rankedAllSubscriptionDates:(id)a7 recentlySeenHistoryItems:(id)a8 recentlyReadHistoryItems:(id)a9 onboardingVersion:(id)a10 bundleSubscription:(id)a11 userEmbeddingData:(id)a12;

@end
