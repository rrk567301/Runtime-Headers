@class BRUploadAllFilesOperation, DKSignOutDataSyncWindowController, ACAccountStore, ACAccount, NSWindow;

@interface DKTaskiCloudDataUploadCheck : DKTask

@property (retain) DKSignOutDataSyncWindowController *signOutSyncingWindowController;
@property (retain) NSWindow *hostWindow;
@property (retain) ACAccountStore *store;
@property (retain) ACAccount *primaryAccount;
@property (retain) BRUploadAllFilesOperation *uploadOperation;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (char)needsToRun;
- (id)currentAccountPendingChangesContainers;
- (char)iCloudAccountPendingChanges;
- (char)iCloudDesktopEnabled;
- (char)photosPendingUpload;
- (char)photosiCloudLibraryEnabled;
- (id)syncingAppsThatNeedDataUpload;
- (void)uploadiCloudDocumentsWithCompletion:(id /* block */)a0;

@end
