@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADVUWGalleryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_galleries;
}

+ (void)releaseSharedGalleryForPhotoLibrary:(id)a0;
+ (id)sharedGalleryForPhotoLibrary:(id)a0;
+ (id)sharedGalleryManager;

- (void).cxx_destruct;
- (id)init;
- (void)releaseSharedGalleryForPhotoLibrary:(id)a0;
- (id)sharedGalleryForPhotoLibrary:(id)a0;

@end
