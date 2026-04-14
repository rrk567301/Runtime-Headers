@class PHPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PHPhotoLibraryFeatureAvailabilityReporter : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tasks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_tasks;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)availabilityForFeature:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)availabilityStatusForFeature:(unsigned long long)a0 availabilityConfig:(id)a1 completionHandler:(id /* block */)a2;
- (void)availabilityStatusForFeature:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
