@interface IDSPhoneSubscriptionSelector : NSObject

@property (retain, nonatomic) id syncDaemonController;
@property (copy, nonatomic) id /* block */ syncDaemonControllerBuilder;

- (void)setSelectedSubscriptions:(id)a0 withCompletion:(id /* block */)a1;
- (id)unselectedTemporaryPhoneAliasesWithError:(id *)a0;
- (void)removeTemporaryPhoneAlias:(id)a0 withCompletion:(id /* block */)a1;
- (void)_performSyncAction:(id /* block */)a0;
- (void)disableTemporaryPhoneAlias:(id)a0 withCompletion:(id /* block */)a1;
- (void)unselectSubscription:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)removeTemporaryPhoneAlias:(id)a0 withError:(id *)a1;
- (id)selectSubscription:(id)a0 withError:(id *)a1;
- (id)initWithSyncDaemonControllerBuilder:(id /* block */)a0;
- (void)selectSubscription:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)disableTemporaryPhoneAlias:(id)a0 withError:(id *)a1;
- (void)requestUnselectedTemporaryPhoneAliasesWithError:(id /* block */)a0;
- (id)selectedSubscriptionsWithError:(id *)a0;
- (id)init;
- (BOOL)enableTemporaryPhoneAlias:(id)a0 withError:(id *)a1;
- (void)enableTemporaryPhoneAlias:(id)a0 withCompletion:(id /* block */)a1;
- (id)unselectSubscription:(id)a0 withError:(id *)a1;
- (void)requestSelectedSubscriptionsWithCompletion:(id /* block */)a0;
- (id)setSelectedSubscriptions:(id)a0 withError:(id *)a1;

@end
