@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForWidgetArticles;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForNotificationPool;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForWidgetConfig;
+ (id)edgeCacheHintForRecipeLists;

- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
