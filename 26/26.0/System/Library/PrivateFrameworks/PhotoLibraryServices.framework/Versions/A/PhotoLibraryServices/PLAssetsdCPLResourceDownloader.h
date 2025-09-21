@class NSString, NSXPCConnection, PLPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (id)initWithPhotoLibrary:(id)a0 trustedCallerBundleID:(id)a1 clientConnection:(id)a2;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)a0 downloadContext:(id)a1;
- (void)_handleInvalidation;
- (id)startCPLDownloadForAsset:(id)a0 resourceType:(unsigned long long)a1 masterResourceOnly:(BOOL)a2 highPriority:(BOOL)a3 track:(BOOL)a4 notify:(BOOL)a5 transient:(BOOL)a6 proposedTaskIdentifier:(id)a7 doneToken:(id)a8 error:(id *)a9;
- (void)cancelCPLDownloadTasks:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleInvalidation;
- (void).cxx_destruct;

@end
