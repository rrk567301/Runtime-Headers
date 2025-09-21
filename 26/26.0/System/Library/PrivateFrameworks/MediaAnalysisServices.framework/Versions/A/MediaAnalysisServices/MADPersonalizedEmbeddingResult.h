@class MADEmbeddingResult;

@interface MADPersonalizedEmbeddingResult : MADMultiModalResult

@property (readonly, nonatomic) MADEmbeddingResult *embedding;
@property (readonly, nonatomic) MADEmbeddingResult *hiddenLayer;
@property (readonly, nonatomic) MADEmbeddingResult *pooledEmbedding;
@property (readonly, nonatomic) BOOL personalized;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbedding:(id)a0 hiddenLayer:(id)a1 pooledEmbedding:(id)a2 personalized:(BOOL)a3;

@end
