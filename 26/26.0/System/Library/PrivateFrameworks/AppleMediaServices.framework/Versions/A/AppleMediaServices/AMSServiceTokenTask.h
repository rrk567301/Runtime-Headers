@class NSString, ACAccount, ACAccountStore;

@interface AMSServiceTokenTask : AMSTask

@property (retain) Class authKitUpdateTaskClass;
@property (readonly) ACAccount *account;
@property (readonly) ACAccountStore *accountStore;
@property (readonly, copy) NSString *serviceIdentifier;
@property (readonly) id /* block */ tokenValidationHandler;
@property (readonly) BOOL useCachedServiceToken;

- (id)perform;
- (void).cxx_destruct;
- (id)_authKitUpdateTask;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 serviceIdentifier:(id)a2 tokenValidationHandler:(id /* block */)a3 useCachedServiceToken:(BOOL)a4;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 serviceIdentifier:(id)a2 useCachedServiceToken:(BOOL)a3;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1 tokenValidationHandler:(id /* block */)a2;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1 tokenValidationHandler:(id /* block */)a2 useCachedServiceToken:(BOOL)a3;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1 useCachedServiceToken:(BOOL)a2;
- (id)performAuthKitUpdate;

@end
