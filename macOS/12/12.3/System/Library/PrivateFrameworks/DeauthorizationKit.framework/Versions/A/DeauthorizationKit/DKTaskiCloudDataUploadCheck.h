@class BRUploadAllFilesOperation, DKSignOutDataSyncWindowController, ACAccountStore, ACAccount, NSWindow;

@interface DKTaskiCloudDataUploadCheck : DKTask

@property (retain) DKSignOutDataSyncWindowController *signOutSyncingWindowController;
@property (retain) NSWindow *hostWindow;
@property (retain) ACAccountStore *store;
@property (retain) ACAccount *primaryAccount;
@property (retain) BRUploadAllFilesOperation *uploadOperation;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)needsToRun;
- (id)syncingAppsThatNeedDataUpload;
- (void)uploadiCloudDocumentsWithCompletion:(id /* block */)a0;
- (id)currentAccountPendingChangesContainers;
- (BOOL)photosiCloudLibraryEnabled;
- (BOOL)iCloudAccountPendingChanges;
- (BOOL)photosPendingUpload;
- (BOOL)iCloudDesktopEnabled;

@end
