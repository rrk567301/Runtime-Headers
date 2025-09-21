@class NTPBArticleTopic, NSString;

@interface FCTopicTranslation : NSObject

@property (retain, nonatomic) NTPBArticleTopic *articleTopic;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) char isHidden;
@property (nonatomic) char isEligibleForGrouping;
@property (nonatomic) char isEligibleForGroupingIfFavorited;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLanguageBucket:(id)a0;
- (id)initWithTagID:(id)a0;

@end
