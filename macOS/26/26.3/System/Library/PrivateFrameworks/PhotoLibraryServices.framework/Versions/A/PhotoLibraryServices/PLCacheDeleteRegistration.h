@class PFCameraViewfinderSessionWatcher, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSMutableDictionary *_cacheDeleteSupportByLibraryURL;
    NSMutableDictionary *_notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> *_queue;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSMutableDictionary *_fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheDeleteUrgencySpecialCasePhotoLibrary;
+ (void)registerSpecialCaseHandler;
+ (void)registerDefaultHandlers;

- (void)_registerResourceDirectories;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)_setCacheDeleteSupport:(id)a0 forLibrary:(id)a1;
- (id)init;
- (void)_processRemovedFiles:(id)a0 withCacheDeleteSupport:(id)a1 forLibraryURL:(id)a2;
- (void)registerCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (void)unregisterCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (id)_getInternalQueue;
- (void).cxx_destruct;
- (void)_replaceCameraWatcherWith:(id)a0;

@end
