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
- (void)resumeInterruptedImport;
- (id)undoControllerForBookmarkImporter:(id)a0;
- (void)_importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (void)_updateStoredState;
- (void)_resumeInterruptedImport;
- (id)_storedState;
- (void)abandonInterruptedImport;
- (id)_sourceBrowserDataDirectoriesInImportState:(id)a0;
- (void)importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (id)_sourceBrowserBundleInImportState:(id)a0;
- (id)_existingBrowserDataImporterServiceConnection;
- (BOOL)_isStoredStateValid;
- (BOOL)_isImportingOnAccessQueue;
- (BOOL)_importHasBeenCanceledOnAccessQueue;
- (unsigned long long)_dataTypesRemainingToBeImportedOnAccessQueue;
- (id)_chromeApplicationBundle;
- (void)_invalidateBrowserDataImporterServiceConnectionIfPossible;
- (void)_postCompletionNotificationsAndResetState;
- (id)_failureLocalizedStringFirefox;
- (id)_failureLocalizedStringChrome;
- (id)_successLocalizedStringFirefox;
- (id)_successLocalizedStringChrome;
- (id)_localizedSuccessMessage;
- (id)_localizedFailureMessage;
- (BOOL)_importHasBeenCanceled;
- (void)_didCompleteImportingDataTypes:(unsigned long long)a0 success:(BOOL)a1 numberOfImportedItems:(long long)a2;
- (void)getImportableDataTypesForBrowserDataDirectories:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelImport;

@end
