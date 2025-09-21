@class NSString;

@interface FCFeedContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) FCFeedContext *feedContextForSmarterFetch;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) long long flags;
@property (readonly, nonatomic) char isHiddenFeed;
@property (readonly, nonatomic) char isPaidBundleFeed;
@property (readonly, nonatomic) char isTopStories;
@property (readonly, nonatomic) char isEditorial;
@property (readonly, nonatomic) char isEditorialGems;

+ (id)feedContextForChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForEditorialChannel:(id)a0 editorialGemsSectionID:(id)a1;
+ (id)feedContextForEditorialChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForEditorialTag:(id)a0;
+ (id)feedContextForHiddenFeed;
+ (id)feedContextForPaidBundleFeed;
+ (id)feedContextForTag:(id)a0;
+ (id)feedContextForTopStoriesChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForTopStoriesTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelID:(id)a0 sectionID:(id)a1 topicID:(id)a2 flags:(long long)a3;

@end
