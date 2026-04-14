@class NSString;

@interface SKDKeyphrase : NSObject

@property (readonly, nonatomic) NSString *keyphrase;
@property (readonly, nonatomic) unsigned long long tokenCount;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 keyphrase:(id)a1 tokenCount:(unsigned long long)a2 score:(double)a3;

@end
