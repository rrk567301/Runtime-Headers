@class MLModelAssetResourceFactory, MLModelStructure;

@interface MLModelAssetModelStructureVendor : NSObject

@property (readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory;
@property (retain) MLModelStructure *modelStructure;

- (void).cxx_destruct;
- (void)modelStructureWithCompletionHandler:(id /* block */)a0;
- (void)_modelStructureWithCompletionHandler:(id /* block */)a0;
- (id)initWithResourceFactory:(id)a0;

@end
