@class VUWGallery, VNPersonsModel, VNEntityIdentificationModel, PHPhotoLibrary, VCPPhotosFaceProcessingContext, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADPersonIdentificationTaskResource : VCPMADVisionResource {
    NSObject<OS_dispatch_queue> *_queue;
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosFaceProcessingContext *_faceProcessingContext;
    VUWGallery *_gallery;
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
}

+ (id)sharedResource;

- (void)purge;
- (id)photoLibrary;
- (id)init;
- (void).cxx_destruct;
- (id)gallery;
- (void)_loadVIPModels;
- (void)_loadVUGallery;
- (id)personsModel;
- (id)petsModel;

@end
