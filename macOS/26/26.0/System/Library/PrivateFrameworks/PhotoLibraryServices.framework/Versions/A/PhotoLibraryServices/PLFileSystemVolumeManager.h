@class NSMutableDictionary, NSFileManager, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSFileManager *_fileManager;
    NSMutableDictionary *_mountedVolumeURLsByUuid;
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;
    NSMapTable *_mocsByVolume;
    struct __DASession { } *_diskArbitrationSession;
}

+ (id)sharedFileSystemVolumeManager;

- (void)registerPLFileSystemVolume:(id)a0;
- (void)_updateMountedVolumeURLs;
- (id)volumeForURL:(id)a0 context:(id)a1;
- (void)dealloc;
- (void)_updateOfflineStates;
- (void)unregisterPLFileSystemVolume:(id)a0;
- (id)initSharedVolumeManager;
- (void)_diskAppeared:(id)a0;
- (void)_diskDisappeared:(id)a0;
- (void).cxx_destruct;

@end
