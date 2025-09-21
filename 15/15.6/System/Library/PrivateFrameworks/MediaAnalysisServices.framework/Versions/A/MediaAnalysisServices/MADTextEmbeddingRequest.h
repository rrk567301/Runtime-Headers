@class NSArray;

@interface MADTextEmbeddingRequest : MADTextRequest

@property (nonatomic) char calibrate;
@property (nonatomic) char computeThreshold;
@property (nonatomic) char extendedContextLength;
@property (nonatomic) char computeSafety;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
