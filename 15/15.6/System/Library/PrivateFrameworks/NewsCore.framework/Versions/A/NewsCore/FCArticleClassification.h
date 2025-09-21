@class NSString;

@interface FCArticleClassification : NSObject

@property (copy, nonatomic) NSString *articleID;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArticleID:(id)a0;

@end
