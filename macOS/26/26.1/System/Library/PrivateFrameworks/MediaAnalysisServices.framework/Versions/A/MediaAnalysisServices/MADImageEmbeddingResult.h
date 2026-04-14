@class MADEmbeddingResult;

@interface MADImageEmbeddingResult : MADResult

@property (readonly, nonatomic) MADEmbeddingResult *embedding;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2 shape:(id)a3;

@end
