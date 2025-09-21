@class MLModel, NSURL, MLModelAssetResourceFactory, NSDictionary, MLModelAssetModelStructureVendor, MLModelAssetModelVendor, MLModelAssetDescriptionVendor, MLModelConfiguration;
@protocol MLRegressor, MLClassifier;

@interface MLModelAsset : NSObject

@property (readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory;
@property (readonly, nonatomic) MLModelAssetDescriptionVendor *descriptionVendor;
@property (readonly, nonatomic) MLModelAssetModelVendor *modelVendor;
@property (readonly, nonatomic) MLModelAssetModelStructureVendor *structureVendor;
@property (copy, nonatomic) MLModelConfiguration *lastConfiguration;
@property (retain, nonatomic) NSDictionary *archiveData;
@property (readonly) NSURL *compiledURL;
@property (readonly, copy, nonatomic) NSURL *compiledModelURL;
@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) id<MLRegressor> regressor;
@property (readonly, nonatomic) id<MLClassifier> classifier;

+ (id)fetchNetworkURLFromCompiledModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithSpecification:(void *)a0 error:(id *)a1;
+ (id)modelAssetWithSpecificationURL:(id)a0 compilerOptions:(id)a1 error:(id *)a2;
+ (BOOL)purgeANEIRForModelAtURL:(id)a0 error:(id *)a1;
+ (BOOL)isANESupported;
+ (id)modelAssetDataByLoadingBlobFileReferencesInModelSpecificationAtURL:(id)a0 blobMapping:(id *)a1 error:(id *)a2;
+ (id)modelAssetWithSpecificationData:(id)a0 blobMapping:(id)a1 error:(id *)a2;
+ (id)modelAssetWithSpecification:(void *)a0 compilerOptions:(id)a1 error:(id *)a2;
+ (id)modelAssetWithSpecificationURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)modelAssetDataByResolvingBlobFileReferencesIntoInMemoryValuesInModelSpecificationAtURL:(id)a0 error:(id *)a1;
+ (id)_modelAssetWithSpecificationData:(id)a0 blobMapping:(id)a1 error:(id *)a2;
+ (BOOL)needsANECompilationForModelAtURL:(id)a0 result:(BOOL *)a1 error:(id *)a2;
+ (BOOL)purgeANEBinaryForModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithSpecificationData:(id)a0 error:(id *)a1;

- (id)initWithArchiveData:(id)a0;
- (BOOL)load:(id *)a0;
- (id)modelWithError:(id *)a0;
- (id)classifierWithError:(id *)a0;
- (id)regressorWithError:(id *)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (long long)storageType;
- (id)description;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithResourceFactory:(id)a0 configuration:(id)a1;
- (void)functionNamesWithCompletionHandler:(id /* block */)a0;
- (void)modelDescriptionWithCompletionHandler:(id /* block */)a0;
- (void)modelStructureWithCompletionHandler:(id /* block */)a0;
- (void)modelDescriptionOfFunctionNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
