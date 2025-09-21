@class NSString, NSDictionary, NSNumber;

@interface CDMEmbeddingConfigItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *embeddingModelPath;
@property (readonly, nonatomic) NSDictionary *embeddingModelMetadata;
@property (readonly, nonatomic) NSNumber *embeddingModelDimension;
@property (readonly, nonatomic) NSString *embeddingModelVersion;
@property (readonly, nonatomic) char isStableEmbeddingModel;

+ (long long)getEmbeddingDimensionFromEmbeddingModelMetadata:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmbeddingModelPath:(id)a0 isStableEmbeddingModel:(char)a1;

@end
