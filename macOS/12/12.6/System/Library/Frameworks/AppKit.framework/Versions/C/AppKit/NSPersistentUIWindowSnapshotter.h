@class NSMutableDictionary, NSData, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface NSPersistentUIWindowSnapshotter : NSObject {
    NSURL *_persistentStateDirectoryURL;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *windowsPendingSnapshotting;
    NSMutableDictionary *windowIDsToSnapshotInfo;
    BOOL hasDisabledSuddenTermination;
    NSObject<OS_dispatch_queue> *_IOQueue;
    char volumeIsLocal;
    unsigned int _cryptoKeyGeneration;
}

@property (copy) NSData *cryptoUUID;
@property (copy) NSData *cryptoKey;

- (void)dealloc;
- (id)initWithFileManager:(id)a0;
- (void)enqueueWindowForSnapshotting:(unsigned int)a0 forWindowNumber:(long long)a1;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (void)discardAllSnapshotData;
- (void)finishPendingSnapshotsImmediatelyWithCompletionHandler:(id /* block */)a0;
- (BOOL)setCryptoKey:(id)a0 uuid:(id)a1;
- (BOOL)windowHasBeenSnapshotted:(unsigned int)a0;
- (id)initWithPersistentStateDirectoryURL:(id)a0 IOQueue:(id)a1;
- (void)updateSuddenTermination;
- (BOOL)dequeueOneWindowToSnapshot:(unsigned int *)a0 windowNumber:(long long *)a1;
- (void)captureAndWriteSnapshotForWindowNumber:(long long)a0 forWindowID:(unsigned int)a1 waitUntilDone:(BOOL)a2;
- (BOOL)snapshotOnePendingWindowWaitUntilDone:(BOOL)a0;
- (void)asynchronouslySnapshotPendingWindows;
- (void)synchronouslySnapshotPendingWindows;
- (BOOL)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 toFile:(id)a5 inDirectory:(id)a6 encryptingWithKey:(id)a7 uuid:(id)a8 checksum:(unsigned int *)a9 fd:(int *)a10;
- (void)accessWindowBits:(long long)a0 handler:(id /* block */)a1;

@end
