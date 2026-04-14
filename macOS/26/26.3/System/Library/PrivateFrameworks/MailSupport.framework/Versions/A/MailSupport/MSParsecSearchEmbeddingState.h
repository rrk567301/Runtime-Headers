@interface MSParsecSearchEmbeddingState : NSObject

@property (readonly) int queryStatus;
@property (readonly) BOOL hasQueryEmbedding;
@property (readonly) BOOL hasKeywordResults;
@property (readonly) BOOL hasEmbeddingResults;

+ (id)embeddingStateWithQueryStatus:(int)a0 hasQueryEmbedding:(BOOL)a1 hasKeywordResults:(BOOL)a2 hasEmbeddingResults:(BOOL)a3;

- (id)description;
- (id)feedbackEmbedding;
- (id)initWithQueryStatus:(int)a0 hasQueryEmbedding:(BOOL)a1 hasKeywordResults:(BOOL)a2 hasEmbeddingResults:(BOOL)a3;

@end
