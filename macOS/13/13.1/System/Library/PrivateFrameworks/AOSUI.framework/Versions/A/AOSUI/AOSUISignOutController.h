@class ACAccountStore, NSMutableArray;

@interface AOSUISignOutController : NSObject

@property (retain) ACAccountStore *accountStore;
@property (retain) NSMutableArray *signOutObservers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startProgress;
- (void)endProgress;
- (void)registerObserver:(id)a0;
- (void)signOutAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (id)_dataclassActionsForAccountDeletion:(id)a0;
- (void)_finishDeletingAccount:(id)a0 window:(id)a1 withActions:(id)a2 completion:(id /* block */)a3;
- (void)_preflightServices:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)_showWalletDialogForAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)_showDesktopAndDocumentsAlertForAccount:(id)a0 window:(id)a1 withActions:(id)a2 completion:(id /* block */)a3;
- (void)_removeAccount:(id)a0 withActions:(id)a1 completion:(id /* block */)a2;

@end
