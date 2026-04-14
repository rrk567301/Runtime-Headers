@class VCPPreAnalysisImageLoader, VCPPoolBasedPixelBufferCreator, VCPMAMLModel, VCPObjectPool, VNSession;

@interface MADSceneResources : NSObject

@property (readonly, nonatomic) VNSession *session;
@property (readonly, nonatomic) VCPPreAnalysisImageLoader *imageLoader;
@property (readonly, nonatomic) VCPPoolBasedPixelBufferCreator *monochromeBufferCreator;
@property (readonly, nonatomic) VCPMAMLModel *rotationModel;
@property (readonly, nonatomic) VCPPoolBasedPixelBufferCreator *rotationBufferCreator;
@property (readonly, nonatomic) VCPPoolBasedPixelBufferCreator *embeddingBufferCreator;
@property (readonly, nonatomic) VCPObjectPool *safetyTypeNPool;
@property (readonly, nonatomic) VCPObjectPool *safetyTypeGVPool;

- (id)init;
- (void).cxx_destruct;

@end
