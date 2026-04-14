@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForRecipeLists;
+ (id)edgeCacheHintForNotificationPool;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForWidgetArticles;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForWidgetConfig;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForForYouConfig;

- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
