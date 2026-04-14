@class ACAccountStore, AADataclassManager;

@interface AASignInOperationHelper : NSObject {
    ACAccountStore *_accountStore;
    AADataclassManager *_dataclassManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (void)_refreshEnabledDataclassesForAccount:(id)a0;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)signInAccount:(id)a0 enablingDataclasses:(BOOL)a1 completion:(id /* block */)a2;
- (void)signInAccount:(id)a0 withDataclassActions:(id)a1 completion:(id /* block */)a2;

@end
