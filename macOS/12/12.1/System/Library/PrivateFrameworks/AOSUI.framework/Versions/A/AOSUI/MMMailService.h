@class MMWebKitViewController, NSString;

@interface MMMailService : MMService <MMWebKitViewControllerDelegate>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (nonatomic) BOOL shouldEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)displayName;
- (id)icon;
- (void)_propertiesChanged:(id)a0;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)hasDataToMerge;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2;
- (BOOL)shouldEnableOnLogin;
- (void)_serviceFailed:(id)a0;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)enableMailAddressListeners;
- (void)_closeModalWindow;
- (void)_showClientFailureSheet:(id)a0 enabling:(BOOL)a1;
- (void)disableMailAddressListeners;

@end
