@class NSString, ACAccount, ACAccountStore;

@interface AMSServiceTokenTask : AMSTask

@property (retain) Class authKitUpdateTaskClass;
@property (readonly) ACAccount *account;
@property (readonly) ACAccountStore *accountStore;
@property (readonly, copy) NSString *serviceIdentifier;
@property (readonly) char useCachedServiceToken;

- (void).cxx_destruct;
- (id)perform;
- (id)_authKitUpdateTask;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 serviceIdentifier:(id)a2 useCachedServiceToken:(char)a3;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1 useCachedServiceToken:(char)a2;
- (id)performAuthKitUpdate;

@end
