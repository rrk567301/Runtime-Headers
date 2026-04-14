@class NSObject, VNPersonsModel, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPObjectPool;
@protocol OS_dispatch_queue;

@interface VCPMADPersonIdentificationTaskResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPObjectPool *_sessionPool;
    VCPPhotosFaceProcessingContext *_faceProcessingContext;
    VNPersonsModel *_personIdentityModel;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)sharedResource;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (id)photoLibrary;
- (id)visionSession;
- (void)_loadResources;
- (id)personIdentityModel;
- (id)faceProcessingContext;

@end
