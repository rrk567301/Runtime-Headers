@class NSArray;

@interface MADPersonalizedEmbeddingRequest : MADMultiModalRequest

@property (nonatomic) long long type;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL bypassFaceDetection;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
