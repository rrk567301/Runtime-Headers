@interface DownloadLocationRemoteViewController : NSRemoteViewController

+ (void)setUpDownloadLocationRemoteViewControllerUsingBlock:(id /* block */)a0;

- (id)serviceViewControllerInterface;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 shouldRequestDownloadLocation:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)saveWebPageUsingDataProvider:(id)a0 withSuggestedFilename:(id)a1 rawSourceMIMEType:(id)a2 canSaveAsWebArchive:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)chooseCustomDownloadLocationWithCompletionHandler:(id /* block */)a0;

@end
