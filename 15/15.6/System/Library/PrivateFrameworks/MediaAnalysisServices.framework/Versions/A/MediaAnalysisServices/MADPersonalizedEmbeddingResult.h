@class MADEmbeddingResult;

@interface MADPersonalizedEmbeddingResult : MADMultiModalResult

@property (readonly, nonatomic) MADEmbeddingResult *embedding;
@property (readonly, nonatomic) MADEmbeddingResult *hiddenLayer;
@property (readonly, nonatomic) MADEmbeddingResult *pooledEmbedding;
@property (readonly, nonatomic) char personalized;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmbedding:(id)a0 hiddenLayer:(id)a1 pooledEmbedding:(id)a2 personalized:(char)a3;

@end
