@class NSArray;

@interface MADImageEmbeddingRequest : MADRequest

@property (nonatomic) char bypassNormalizaton;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
