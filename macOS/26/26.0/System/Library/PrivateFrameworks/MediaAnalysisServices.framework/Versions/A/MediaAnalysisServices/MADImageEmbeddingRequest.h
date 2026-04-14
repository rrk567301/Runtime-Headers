@class NSArray;

@interface MADImageEmbeddingRequest : MADRequest

@property (nonatomic) BOOL bypassNormalizaton;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;
@property (nonatomic) long long embeddingRequestType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
