@class NSURL, NSObject;
@protocol OS_dispatch_queue, MLModelAssetResourceFactoryImpl;

@interface MLModelAssetResourceFactory : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *modelLoadQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *descriptionLoadQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *structureLoadQueue;
@property (readonly, nonatomic) id<MLModelAssetResourceFactoryImpl> impl;
@property (readonly, copy, nonatomic) NSURL *compiledModelURL;

+ (id)resourceFactoryWithArchiveData:(id)a0;
+ (id)resourceFactoryWithModelURL:(id)a0 error:(id *)a1;

- (id)initWithImpl:(id)a0;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;
- (void)modelStructureWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)modelAssetDescriptionWithCompletionHandler:(id /* block */)a0;
- (void)modelWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
