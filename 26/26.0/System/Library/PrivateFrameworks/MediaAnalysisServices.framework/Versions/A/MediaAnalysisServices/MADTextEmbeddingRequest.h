@class NSArray;

@interface MADTextEmbeddingRequest : MADTextRequest

@property (nonatomic) BOOL calibrate;
@property (nonatomic) BOOL computeThreshold;
@property (nonatomic) BOOL extendedContextLength;
@property (nonatomic) BOOL computeSafety;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
