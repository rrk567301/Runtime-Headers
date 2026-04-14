@class NSString, NSWindow, MMWebKitViewController;

@interface iCloudPurchaseStorageController : NSObject <MMWebKitViewControllerDelegate>

@property (retain) NSWindow *parentWindow;
@property (retain) NSString *accountID;
@property (retain) MMWebKitViewController *purchaseWebKitViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)openPurchaseStorageForAccountID:(id)a0 withWindow:(id)a1 andWithQueryParams:(id)a2 andStorageContext:(id)a3;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)_closeWebviewWindow:(BOOL)a0;

@end
