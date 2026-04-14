@class NSArray;

@interface MADImageEmbeddingRequest : MADRequest

@property (nonatomic) BOOL bypassNormalizaton;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;
@property (nonatomic) long long embeddingRequestType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
