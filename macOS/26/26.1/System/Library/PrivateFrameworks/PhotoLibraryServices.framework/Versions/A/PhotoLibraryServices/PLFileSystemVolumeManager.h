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
- (void)_diskDisappeared:(id)a0;
- (void)_diskAppeared:(id)a0;
- (void)_updateOfflineStates;
- (id)volumeForURL:(id)a0 context:(id)a1;
- (id)initSharedVolumeManager;
- (void)dealloc;
- (void).cxx_destruct;
- (void)unregisterPLFileSystemVolume:(id)a0;

@end
