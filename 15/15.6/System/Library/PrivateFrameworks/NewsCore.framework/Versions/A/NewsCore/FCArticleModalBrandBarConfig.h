@class NSString;

@interface FCArticleModalBrandBarConfig : NSObject

@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) long long quiescenceInterval;
@property (readonly, nonatomic) int maxCount;
@property (readonly, nonatomic) NSString *messageTitle;
@property (readonly, nonatomic) NSString *messageBody;
@property (readonly, nonatomic) NSString *ctaTitle;
@property (readonly, nonatomic) NSString *ctaUrl;
@property (readonly, nonatomic) int campaignVersion;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
