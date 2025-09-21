@class NSString;

@interface FCArticleLinkBehaviorConfig : NSObject

@property (readonly, nonatomic) char openArticlesAsModals;
@property (readonly, nonatomic) char lohAnimationEnabled;
@property (readonly, nonatomic) char lohAnimationCompletesInArticle;
@property (readonly, nonatomic) NSString *animationTitleLine1;
@property (readonly, nonatomic) NSString *animationTitleLine2;
@property (readonly, nonatomic) NSString *animationBody;
@property (readonly, nonatomic) long long animationQuiescenceInterval;
@property (readonly, nonatomic) int animationMaxCount;
@property (readonly, nonatomic) int animationCampaignVersion;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
