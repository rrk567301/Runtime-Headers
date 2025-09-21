@class NSArray;

@interface SEMVectorSearchQuery : NSObject

@property (readonly, nonatomic) char outputEmbeddingType;
@property (readonly, nonatomic) char inputTokenType;
@property (readonly, nonatomic) int vectorDbResultLimit;
@property (readonly, nonatomic) int finalResultLimit;
@property (readonly, nonatomic) float minScoreThreshold;
@property (readonly, nonatomic) float maxScoreThreshold;
@property (readonly, nonatomic) NSArray *searchTokens;

- (void).cxx_destruct;
- (id)initWithOutputEmbeddingType:(char)a0 inputTokenType:(char)a1 vectorDbResultLimit:(int)a2 finalResultLimit:(int)a3 minScoreThreshold:(float)a4 maxScoreThreshold:(float)a5 searchTokens:(id)a6;

@end
