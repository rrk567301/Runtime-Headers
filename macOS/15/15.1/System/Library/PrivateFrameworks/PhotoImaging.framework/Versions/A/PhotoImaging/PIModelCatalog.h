@class NSError;

@interface PIModelCatalog : NSObject

- (id)init;
- (id)cleanupModelBundleURL:(id *)a0;
- (void)downloadCleanupModelBundleWithCompletionHandler:(void (^)(NSError *))a0;
- (id)inpaintModelURL:(id *)a0;
- (id)refinementModelURL:(id *)a0;
- (id)segmentationModelURL:(id *)a0;

@end
