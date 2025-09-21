@class NSString, NSXPCConnection, PLPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelCPLDownloadTasks:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleInvalidation;
- (id)initWithPhotoLibrary:(id)a0 trustedCallerBundleID:(id)a1 clientConnection:(id)a2;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)a0 downloadContext:(id)a1;
- (id)startCPLDownloadForAsset:(id)a0 resourceType:(unsigned long long)a1 masterResourceOnly:(char)a2 highPriority:(char)a3 track:(char)a4 notify:(char)a5 transient:(char)a6 proposedTaskIdentifier:(id)a7 doneToken:(id)a8 error:(id *)a9;

@end
