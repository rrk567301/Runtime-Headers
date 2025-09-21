@class NSArray, NSNumber;

@interface MADEmbeddingSearchOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) int resultLimit;
@property (nonatomic) char fullScan;
@property (nonatomic) char includePayload;
@property (retain, nonatomic) NSNumber *numberOfProbes;
@property (retain, nonatomic) NSNumber *batchSize;
@property (retain, nonatomic) NSNumber *numConcurrentReaders;

+ (id)defaultOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
