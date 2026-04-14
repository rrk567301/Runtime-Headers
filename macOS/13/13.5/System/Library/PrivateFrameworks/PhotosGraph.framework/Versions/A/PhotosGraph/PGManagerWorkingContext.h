@class PGCurationManager, PHPhotoLibrary, NSObject, PGManager;
@protocol OS_os_log;

@interface PGManagerWorkingContext : NSObject {
    PGManager *_manager;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)musicCuratorContextWithCurationOptions:(id)a0 error:(id *)a1;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)a0;
- (id)initWithManager:(id)a0 loggingConnection:(id)a1;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)a0 error:(id *)a1;

@end
