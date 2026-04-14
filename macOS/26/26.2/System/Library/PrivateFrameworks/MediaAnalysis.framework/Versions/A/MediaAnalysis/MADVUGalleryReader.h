@class NSURL, VUWGallery, NSObject;
@protocol OS_dispatch_queue;

@interface MADVUGalleryReader : NSObject {
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSURL *_storageURL;
    VUWGallery *_gallery;
}

+ (id)sharedGalleryWithPhotoLibrary:(id)a0;

- (void)flush;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)queryKeyObservationsFor:(id)a0 limit:(long long)a1 offset:(long long)a2;

@end
