@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject

@property (class, readonly, nonatomic) DABabysitter *sharedBabysitter;

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableDictionary *refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary *failedWaiters;
@property (retain, nonatomic) NSMutableDictionary *restrictedWaiters;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (void)giveAccountWithIDAnotherChance:(id)a0;
- (void)_incrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_reloadBabysitterProperties;
- (BOOL)accountShouldContinue:(id)a0;
- (BOOL)accountWithIDShouldContinue:(id)a0;
- (BOOL)registerAccount:(id)a0 forOperationWithName:(id)a1;
- (void)unregisterAccount:(id)a0 forOperationWithName:(id)a1;
- (void)_decrementRefreshCountForWaiter:(id)a0 forOperationWithName:(id)a1;
- (void)_decrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;

@end
