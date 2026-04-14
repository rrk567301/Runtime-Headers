@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADCSUStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_stores;
}

+ (id)sharedCSUStoreManager;

- (void).cxx_destruct;
- (id)init;
- (id)sharedCSUStoreForPhotoLibrary:(id)a0;

@end
