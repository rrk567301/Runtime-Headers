@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADVUWGalleryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_galleries;
}

+ (id)sharedGalleryForPhotoLibrary:(id)a0;
+ (id)sharedGalleryManager;

- (id)init;
- (void).cxx_destruct;
- (id)sharedGalleryForPhotoLibrary:(id)a0;

@end
