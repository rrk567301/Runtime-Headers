@class NSString, NSSet, NSArray;
@protocol FCBundleSubscriptionProviderType;

@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *topStoriesChannelID;
@property (readonly, copy, nonatomic) NSSet *hiddenFeedIDs;
@property (readonly, nonatomic) BOOL allowPaidBundleFeed;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedSubscribedTagIDs;
@property (readonly, copy, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) long long cutoffTime;
@property (readonly, nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (readonly, nonatomic) unsigned long long feedMaxCount;
@property (readonly, nonatomic) long long fetchingBin;
@property (readonly, copy, nonatomic) NSString *throttlingIdentifier;
@property (readonly, nonatomic) double minimumUpdateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithForYouTodaySectionSpecificConfig:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 hiddenFeedIDs:(id)a3 allowPaidBundleFeed:(BOOL)a4 mutedTagIDs:(id)a5 purchasedTagIDs:(id)a6 rankedAllSubscribedTagIDs:(id)a7 bundleSubscriptionProvider:(id)a8 throttlingIdentifier:(id)a9;

@end
