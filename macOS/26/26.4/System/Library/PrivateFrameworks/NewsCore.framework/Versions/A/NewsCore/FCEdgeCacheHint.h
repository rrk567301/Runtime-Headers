@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForTopStories;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForForYouConfig;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForTrending;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForEditorial;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForWidgetConfig;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForWidgetArticles;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForFeaturedArticles;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForCurrentIssues;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForCurrentIssueArticles;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForSpotlight;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForMagazineContent;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForAudioContent;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForLocalNews;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForEvergreenArticles;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForSportsArticles;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForPurchaseLookup;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForNotificationPool;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForRecipeLists;
@property (class, readonly, nonatomic) FCEdgeCacheHint *edgeCacheHintForEndOfArticle;

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
