@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, NSPersistentUIStorageClient;

@interface NSPersistentUIWindowSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_windowsPendingSnapshotting;
    char _hasDisabledSuddenTermination;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_windowIDsToSnapshotInfo;
    NSData *_cryptoKey;
    NSData *_cryptoUUID;
    unsigned int _cryptoKeyGeneration;
}

@property (readonly) id<NSPersistentUIStorageClient> store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)_windowsPendingSnapshotting;
- (void)accessWindowBits:(long long)a0 handler:(id /* block */)a1;
- (void)asynchronouslySnapshotPendingWindows;
- (void)captureAndWriteSnapshotForWindowNumber:(long long)a0 forWindowID:(unsigned int)a1 waitUntilDone:(char)a2;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (char)dequeueOneWindowToSnapshot:(unsigned int *)a0 windowNumber:(long long *)a1;
- (void)discardAllSnapshotData;
- (void)enqueueWindowForSnapshotting:(unsigned int)a0 forWindowNumber:(long long)a1;
- (void)flushPendingSnapshotsSynchronously;
- (id)initWithStore:(id)a0 queue:(id)a1;
- (char)setCryptoKey:(id)a0 uuid:(id)a1;
- (char)snapshotOnePendingWindowWaitUntilDone:(char)a0;
- (void)synchronouslySnapshotPendingWindows;
- (void)updateSuddenTermination;
- (char)windowHasBeenSnapshotted:(unsigned int)a0;

@end
