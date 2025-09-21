@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (id)_systemPhotoLibrary;
- (void)registerAsTCCObserver;
- (void)_handleTCCEvent:(unsigned long long)a0 auth_record:(id)a1;
- (id)initWithLibraryBundleController:(id)a0;
- (void).cxx_destruct;

@end
