@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)registerAsTCCObserver;
- (void)_handleTCCEvent:(unsigned long long)a0 auth_record:(id)a1;
- (void).cxx_destruct;
- (id)_systemPhotoLibrary;
- (id)initWithLibraryBundleController:(id)a0;

@end
