@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForWidgetConfig;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForWidgetArticles;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForNotificationPool;
+ (id)edgeCacheHintForRecipeLists;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;

@end
