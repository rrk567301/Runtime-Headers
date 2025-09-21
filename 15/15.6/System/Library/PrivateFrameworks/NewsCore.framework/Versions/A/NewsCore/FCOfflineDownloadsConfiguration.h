@class FCOfflineFeedRules;

@interface FCOfflineDownloadsConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long minDeviceStorage;
@property (readonly, nonatomic) long long maxDownloadStorage;
@property (readonly, nonatomic) long long maxArticleDownloads;
@property (readonly, nonatomic) long long maxIssueDownloads;
@property (readonly, nonatomic) long long maxPuzzleDownloads;
@property (readonly, nonatomic) long long maxAudioDownloads;
@property (readonly, nonatomic) long long maxRecipeDownloads;
@property (readonly, nonatomic) long long maxImagesPerArticle;
@property (readonly, nonatomic) char useSmallestArticleThumbnails;
@property (readonly, nonatomic) char useSmallestPuzzleThumbnails;
@property (readonly, nonatomic) char useSmallestRecipeThumbnails;
@property (readonly, nonatomic) char useSmallestArticleImages;
@property (readonly, nonatomic) FCOfflineFeedRules *todayFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *puzzleHubFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *puzzleTypeFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *sportsFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *magazineFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *audioFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *savedFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *historyFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *sharedWithYouFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *recipeBoxFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *foodHubFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *recipeCatalogFeedRules;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 optimized:(char)a1;

@end
