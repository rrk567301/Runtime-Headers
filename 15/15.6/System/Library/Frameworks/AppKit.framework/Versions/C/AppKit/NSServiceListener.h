@class NSMutableArray;

@interface NSServiceListener : NSObject {
    NSMutableArray *serviceProviders;
}

- (char)_displaySandboxPermissionDialogWithRequestingAppName:(id)a0 serviceTitle:(id)a1;
- (char)_doInvokeServiceIn:(id)a0 msg:(id)a1 pb:(id)a2 userData:(id)a3 error:(id *)a4 unhide:(char)a5;
- (char)_verifyAgainstBundleWithServiceName:(id)a0 message:(id)a1 restricted:(char)a2;
- (char)_verifyService:(id)a0 requestRestricted:(char)a1 isAppleApp:(char)a2;
- (void)addServiceProvider:(id)a0;
- (id)providerRespondingToSelector:(SEL)a0;
- (void)removeServiceProvider:(id)a0;

@end
