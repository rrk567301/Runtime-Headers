@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, BADownloaderExtension;

@interface BADownloaderExtensionConnection : NSExtensionContext <BADownloaderExtensionSyncProtocol, _EXMainConnectionHandler, _EXConnectionHandler>

@property (retain) NSObject<OS_dispatch_queue> *extensionWorkQueue;
@property (retain) id<BADownloaderExtension> principalObject;
@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithPrincipalObject:(id)a0;
- (void)extensionWillTerminate;
- (void)wakeupForTokenWithReply:(id /* block */)a0;
- (void)downloadsForRequest:(long long)a0 manifestURL:(id)a1 manifestToken:(id)a2 extensionInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)receivedAuthenticationChallenge:(id)a0 download:(id)a1 completionHandler:(id /* block */)a2;
- (void)backgroundDownload:(id)a0 failedWithError:(id)a1 completionHandler:(id /* block */)a2;
- (void)backgroundDownload:(id)a0 finishedWithSandboxToken:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_markPurgableWithFileURL:(id)a0 error:(id *)a1;

@end
