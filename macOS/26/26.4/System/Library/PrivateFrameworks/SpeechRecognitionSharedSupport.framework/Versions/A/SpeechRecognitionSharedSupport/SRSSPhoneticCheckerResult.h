@class NSString;

@interface SRSSPhoneticCheckerResult : NSObject

@property (retain, nonatomic) NSString *text;
@property double score;
@property double phoneticSimilarity;
@property double prior;

- (void).cxx_destruct;
- (id)description;

@end
