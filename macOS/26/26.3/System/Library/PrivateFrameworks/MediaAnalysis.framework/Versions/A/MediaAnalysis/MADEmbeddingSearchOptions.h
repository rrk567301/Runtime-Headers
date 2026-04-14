@class NSArray, NSNumber;

@interface MADEmbeddingSearchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) int resultLimit;
@property (nonatomic) BOOL fullScan;
@property (nonatomic) BOOL includePayload;
@property (copy, nonatomic) NSNumber *numberOfProbes;
@property (copy, nonatomic) NSNumber *batchSize;
@property (copy, nonatomic) NSNumber *numConcurrentReaders;

+ (id)defaultOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
