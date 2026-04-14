@class MADEmbeddingResult;

@interface MADPersonalizedEmbeddingResult : MADMultiModalResult

@property (readonly, nonatomic) MADEmbeddingResult *embedding;
@property (readonly, nonatomic) MADEmbeddingResult *hiddenLayer;
@property (readonly, nonatomic) MADEmbeddingResult *pooledEmbedding;
@property (readonly, nonatomic) BOOL personalized;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEmbedding:(id)a0 hiddenLayer:(id)a1 pooledEmbedding:(id)a2 personalized:(BOOL)a3;

@end
