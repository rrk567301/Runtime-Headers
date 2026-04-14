@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)_handleTCCEvent:(unsigned long long)a0 auth_record:(id)a1;
- (void).cxx_destruct;
- (id)initWithLibraryBundleController:(id)a0;
- (void)registerAsTCCObserver;
- (id)_systemPhotoLibrary;

@end
