@class NSURL;

@interface LCFModelStoreModelMetadataProvider : NSObject

@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL;
@property (readonly, nonatomic) NSURL *metadataPlistFileURL;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)getMetadata;
- (id)getModelMetadata:(id)a0;
- (char)removeModelMetadata:(id)a0;
- (char)setModelMetadata:(id)a0 metadata:(id)a1;

@end
