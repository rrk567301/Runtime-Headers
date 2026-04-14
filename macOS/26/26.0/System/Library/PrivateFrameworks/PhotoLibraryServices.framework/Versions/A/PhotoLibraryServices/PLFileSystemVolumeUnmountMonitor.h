@class NSURL, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_diskArbitrationQueue;
    struct __DASession { } *_diskArbitrationSession;
}

- (void)removeVolumeUnmountObserver:(id)a0;
- (void)dealloc;
- (void)diskUnmountApprovalForDisk:(struct __DADisk { } *)a0;
- (void)addVolumeUnmountObserver:(id)a0;
- (id)description;
- (id)initWithVolumeURL:(id)a0;
- (void).cxx_destruct;

@end
