@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForWidgetArticles;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForRecipeLists;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForWidgetConfig;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForNotificationPool;

- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
