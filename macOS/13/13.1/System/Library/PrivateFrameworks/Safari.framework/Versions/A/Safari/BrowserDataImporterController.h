@class NSXPCConnection, NSString, BrowserHistoryImporter, NSURL, NSArray, BrowserCredentialImporter, NSObject, BrowserBookmarkImporter, NSBundle;
@protocol OS_dispatch_queue;

@interface BrowserDataImporterController : NSObject <BrowserBookmarkImporterDelegate> {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    unsigned long long _dataTypesBeingImported;
    unsigned long long _dataTypesThatSucceeded;
    unsigned long long _dataTypesThatFailed;
    BOOL _importHasBeenCanceled;
    unsigned long long _numberOfResumptionAttempts;
    NSBundle *_sourceBrowserBundle;
    unsigned long long _numberOfBookmarksImported;
    unsigned long long _numberOfCredentialsImported;
}

@property (class, readonly, nonatomic) BrowserDataImporterController *sharedController;

@property (retain, nonatomic) NSXPCConnection *browserDataImporterServiceConnection;
@property (retain, nonatomic) BrowserBookmarkImporter *bookmarkImporter;
@property (retain, nonatomic) BrowserHistoryImporter *historyImporter;
@property (retain, nonatomic) BrowserCredentialImporter *credentialImporter;
@property (readonly, nonatomic) BOOL canImportFromChrome;
@property (readonly, nonatomic) BOOL canImportFromFirefox;
@property (readonly, nonatomic) NSURL *chromeBundleURL;
@property (readonly, nonatomic) NSArray *firefoxBundleURLs;
@property (readonly, nonatomic) NSArray *browserBundleURLs;
@property (readonly, nonatomic) BOOL canResumeInterruptedImport;
@property (readonly, nonatomic) BOOL isImporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (id)undoControllerForBookmarkImporter:(id)a0;
- (void)importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (void)getImportableDataTypesForBrowserDataDirectories:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (void)resumeInterruptedImport;
- (void)_resumeInterruptedImport;
- (id)_sourceBrowserBundleInImportState:(id)a0;
- (id)_sourceBrowserDataDirectoriesInImportState:(id)a0;
- (void)abandonInterruptedImport;
- (void)cancelImport;
- (BOOL)_isImportingOnAccessQueue;
- (id)_chromeApplicationBundle;
- (BOOL)_importHasBeenCanceled;
- (BOOL)_importHasBeenCanceledOnAccessQueue;
- (unsigned long long)_dataTypesRemainingToBeImportedOnAccessQueue;
- (BOOL)_isStoredStateValid;
- (id)_storedState;
- (void)_updateStoredState;
- (void)_didCompleteImportingDataTypes:(unsigned long long)a0 success:(BOOL)a1 numberOfImportedItems:(long long)a2;
- (id)_existingBrowserDataImporterServiceConnection;
- (void)_invalidateBrowserDataImporterServiceConnectionIfPossible;
- (id)_localizedFailureMessage;
- (id)_localizedSuccessMessage;
- (id)_successLocalizedStringChrome;
- (id)_successLocalizedStringFirefox;
- (id)_failureLocalizedStringChrome;
- (id)_failureLocalizedStringFirefox;
- (void)_postCompletionNotificationsAndResetState;

@end
