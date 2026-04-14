@class NSMutableDictionary, NSPersistentUIFileManager, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NSPersistentUIWindowSnapshotter : NSObject {
    NSPersistentUIFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_windowsPendingSnapshotting;
    BOOL _hasDisabledSuddenTermination;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_windowIDsToSnapshotInfo;
    NSData *_cryptoKey;
    NSData *_cryptoUUID;
    unsigned int _cryptoKeyGeneration;
}

- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (id)initWithFileManager:(id)a0 queue:(id)a1;
- (BOOL)setCryptoKey:(id)a0 uuid:(id)a1;
- (void)updateSuddenTermination;
- (void)discardAllSnapshotData;
- (BOOL)windowHasBeenSnapshotted:(unsigned int)a0;
- (void)accessWindowBits:(long long)a0 handler:(id /* block */)a1;
- (BOOL)dequeueOneWindowToSnapshot:(unsigned int *)a0 windowNumber:(long long *)a1;
- (BOOL)snapshotOnePendingWindowWaitUntilDone:(BOOL)a0;
- (void)synchronouslySnapshotPendingWindows;
- (void)asynchronouslySnapshotPendingWindows;
- (void)finishPendingSnapshotsImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)enqueueWindowForSnapshotting:(unsigned int)a0 forWindowNumber:(long long)a1;
- (void)captureAndWriteSnapshotForWindowNumber:(long long)a0 forWindowID:(unsigned int)a1 waitUntilDone:(BOOL)a2;
- (id)_windowsPendingSnapshotting;

@end
