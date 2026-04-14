@class NSString, FileFormatAccessoryViewController;

@interface DownloadLocationServiceViewController : NSServiceViewController <DownloadLocationService, NSOpenSavePanelDelegate> {
    FileFormatAccessoryViewController *_accessoryViewController;
    long long _didFailToShowTextExtensionAlert;
    BOOL _isSavingPlainText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteViewControllerInterface;

- (void)loadView;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)panel:(id)a0 userEnteredFilename:(id)a1 confirmed:(BOOL)a2;
- (void)_createDownloadBundleWithSuggestedFilename:(id)a0 inFolderAtURL:(id)a1 tagNames:(id)a2 allowsOverwrite:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_requestDownloadLocationWithSuggestedFilename:(id)a0 completionHandler:(id /* block */)a1;
- (void)_saveFileData:(id)a0 atURL:(id)a1 withTags:(id)a2 originURL:(id)a3 isWebArchive:(BOOL)a4 canSavePrivacySensitiveData:(BOOL)a5;
- (id)_sharedSandboxBroker;
- (void)chooseCustomDownloadLocationWithCompletionHandler:(id /* block */)a0;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 downloadLocationRequestType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)saveWebPageUsingDataProvider:(id)a0 withSuggestedFilename:(id)a1 rawSourceMIMEType:(id)a2 savePanelMode:(long long)a3 completionHandler:(id /* block */)a4;

@end
