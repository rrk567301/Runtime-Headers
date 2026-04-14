@class NSString, NSDate;

@interface FCArticleTagsExpiration : NSObject

@property (readonly, nonatomic) NSString *tagID;
@property (readonly, nonatomic) NSDate *expireTime;

+ (id)tagsExpirationsFromRecord:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTagsExpiration:(id)a0;

@end
