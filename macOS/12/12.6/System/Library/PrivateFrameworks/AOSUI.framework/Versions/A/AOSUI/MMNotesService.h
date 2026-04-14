@class MMWebKitViewController, NSString;

@interface MMNotesService : MMService <MMWebKitViewControllerDelegate, MMServiceDataclassActionPerforming, MMServicePreflightProtocol>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (nonatomic) BOOL addressCreationPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)icon;
- (void)_setEnabled:(BOOL)a0;
- (void)_propertiesChanged:(id)a0;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)isDataService;
- (BOOL)shouldEnableOnLogin;
- (void)_serviceFailed:(id)a0;
- (void)_setEnabled:(BOOL)a0 withOptions:(int)a1;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)_closeModalWindow;
- (BOOL)_hasEmailAddress;
- (void)enableNotesAddressListeners;
- (void)_showMergeConfirmationSheet:(id)a0;
- (void)_showClientFailureSheet:(id)a0;
- (void)disableNotesAddressListeners;

@end
