@class NSString;

@interface DownloadLocationRemoteViewController : NSRemoteViewController <DownloadLocationServiceRemote>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUpDownloadLocationRemoteViewControllerUsingBlock:(id /* block */)a0;

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)chooseCustomDownloadLocationWithCompletionHandler:(id /* block */)a0;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 downloadLocationRequestType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)reportPermissionDeniedForDownloadLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveWebPageUsingDataProvider:(id)a0 withSuggestedFilename:(id)a1 rawSourceMIMEType:(id)a2 savePanelMode:(long long)a3 completionHandler:(id /* block */)a4;

@end
