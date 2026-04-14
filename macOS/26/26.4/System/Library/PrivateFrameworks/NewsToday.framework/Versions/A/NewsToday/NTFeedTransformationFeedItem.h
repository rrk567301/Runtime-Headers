@class NSString, NTPBFeedItem, NSDate;
@protocol FCFeedTransformationItem;

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem>

@property (readonly, copy, nonatomic) NTPBFeedItem *feedItem;
@property (nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long todayItemType;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, nonatomic) id<FCFeedTransformationItem> feedTransformationItem;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markAsLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)protoitemWithFetchedFeedItemHeadline:(id)a0 configuration:(id)a1;
- (id)init;
- (id)initWithFeedItem:(id)a0 cacheExpirationDate:(id)a1 surfacedByChannelID:(id)a2;

@end
