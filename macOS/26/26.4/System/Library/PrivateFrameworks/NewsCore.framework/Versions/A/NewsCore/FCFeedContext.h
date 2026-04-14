@class NSString;

@interface FCFeedContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) FCFeedContext *unknownFeedContext;
@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetchLatest;
@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetchLatestSupplement;
@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetchGlobalESL;
@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetchGlobalESLSupplement;
@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetchTagESL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *articleListID;
@property (nonatomic) long long flags;
@property (readonly, nonatomic) BOOL isHiddenFeed;
@property (readonly, nonatomic) BOOL isPaidBundleFeed;
@property (readonly, nonatomic) BOOL isTopStories;
@property (readonly, nonatomic) BOOL isEditorial;
@property (readonly, nonatomic) BOOL isEditorialGems;

+ (id)feedContextForChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForHiddenFeed;
+ (id)feedContextForEditorialChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForGlobalESLArticleListID:(id)a0;
+ (id)feedContextForTopStoriesChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForEditorialTag:(id)a0;
+ (id)feedContextForTagESLArticleListID:(id)a0;
+ (id)feedContextForTopStoriesTag:(id)a0;
+ (id)feedContextForEditorialChannel:(id)a0 editorialGemsSectionID:(id)a1;
+ (id)feedContextForTag:(id)a0;
+ (id)feedContextForCoreadArticleListID:(id)a0;
+ (id)feedContextForPaidBundleFeed;
+ (id)feedContextForArticleListID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 sectionID:(id)a1 topicID:(id)a2 articleListID:(id)a3 flags:(long long)a4;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
