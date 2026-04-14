@class MLModelAssetResourceFactory, MLModelStructure;

@interface MLModelAssetModelStructureVendor : NSObject

@property (readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory;
@property (retain) MLModelStructure *modelStructure;

- (void)modelStructureWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_modelStructureWithCompletionHandler:(id /* block */)a0;
- (id)initWithResourceFactory:(id)a0;

@end
