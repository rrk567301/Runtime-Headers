@class NSNumber, NSData, MADEmbeddingResult;

@interface MADTextEmbeddingResult : MADTextResult

@property (readonly, nonatomic) NSNumber *calibrationVersion;
@property (readonly, nonatomic) NSNumber *mean;
@property (readonly, nonatomic) NSNumber *standardDeviation;
@property (readonly, nonatomic) NSNumber *bias;
@property (readonly, nonatomic) NSNumber *scale;
@property (readonly, nonatomic) NSNumber *threshold;
@property (readonly, nonatomic) NSNumber *safetyScore;
@property (readonly, nonatomic) NSNumber *isSafe;
@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, nonatomic) unsigned long long elementCount;
@property (readonly, nonatomic) NSData *embeddingData;
@property (readonly, nonatomic) MADEmbeddingResult *embedding;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbedding:(id)a0 calibrationVersion:(id)a1 mean:(id)a2 standardDeviation:(id)a3 bias:(id)a4 scale:(id)a5 threshold:(id)a6;
- (void)setSafetyScore:(id)a0 isSafe:(id)a1;

@end
