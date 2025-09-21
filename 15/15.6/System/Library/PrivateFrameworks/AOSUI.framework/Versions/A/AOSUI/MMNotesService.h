@class MMWebKitViewController, NSString;

@interface MMNotesService : MMService <MMWebKitViewControllerDelegate, MMServiceDataclassActionPerforming, MMServicePreflightProtocol>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (nonatomic) char addressCreationPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_propertiesChanged:(id)a0;
- (void)_setEnabled:(char)a0;
- (id)icon;
- (void)_serviceFailed:(id)a0;
- (void)_closeModalWindow;
- (char)_hasEmailAddress;
- (void)_setEnabled:(char)a0 withOptions:(int)a1;
- (void)_showClientFailureSheet:(id)a0;
- (void)_showMergeConfirmationSheet:(id)a0;
- (void)disableNotesAddressListeners;
- (void)enableNotesAddressListeners;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (char)isDataService;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)performDataclassActionsForService:(id)a0 willEnable:(char)a1 shouldCreate:(char)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (char)shouldEnableOnLogin;

@end
