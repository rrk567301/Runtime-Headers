@class NSDictionary, NSString;

@interface CDMEmbeddingConfigs : NSObject <NSSecureCoding> {
    NSDictionary *_assetPaths;
    NSString *_stableEmbeddingModelVersion;
    NSString *_clientEmbeddingVersion;
    NSDictionary *_embeddingConfigItems;
    NSDictionary *_serviceDependentEmbeddingModelVersions;
    NSDictionary *_embeddingReturnForVersion;
    char _setupCalled;
}

@property (class, readonly) char supportsSecureCoding;

+ (BOOL)isInternalBuild;
+ (int)getMaxEmbeddingConcurrencyConst;
+ (id)generateEmbeddingModelIdList:(id)a0;
+ (int)getMaxEmbeddingConcurrency;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setupWithError:(id *)a0;
- (id)generateEmbeddingConfigItemsWithError:(id *)a0;
- (id)generateServiceDependentEmbeddingModelVersionsWithError:(id *)a0;
- (id)getAllEmbeddingConfigs;
- (id)getAssetPaths;
- (id)getDependentEmbeddingConfigs;
- (id)getEmbeddingConfigForEmbeddingModelVersion:(id)a0;
- (id)getEmbeddingConfigForFactor:(id)a0;
- (id)getEmbeddingVersionDictionary;
- (id)getStableEmbeddingConfig;
- (id)initWithAssetPaths:(id)a0;
- (id)initWithAssetPaths:(id)a0 embeddingVersion:(id)a1;
- (void)validateClientEmbeddingVersion:(id)a0 embeddingAssetVersion:(id)a1 embeddingModelIdList:(id)a2 multipleModels:(char)a3 withError:(id *)a4;

@end
