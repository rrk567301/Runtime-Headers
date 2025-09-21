@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRCMiniCiconia : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_targetURL;
    NSString *_extensionID;
    char _isDataSeparated;
}

- (id)init;
- (void).cxx_destruct;
- (char)_unregisterSyncRootAtURL:(id)a0 error:(id *)a1;
- (char)_cleanupOldCiconiaDomains:(id *)a0;
- (char)_fsRemoveWorkDirectory:(id *)a0;
- (char)_removeDiagnosticsDirectoryAtURL:(id)a0 withError:(id *)a1;
- (char)_removeFPDomain:(id)a0 error:(id *)a1;
- (char)_removeWorkDirectory:(id *)a0;
- (void)_setupExtensionID;
- (void)cleanupCiconiaAtURL:(id)a0 diagnosticsURL:(id)a1 completionHandler:(id /* block */)a2;

@end
