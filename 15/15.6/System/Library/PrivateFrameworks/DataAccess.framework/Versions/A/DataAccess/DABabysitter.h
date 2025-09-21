@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableDictionary *refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary *failedWaiters;
@property (retain, nonatomic) NSMutableDictionary *restrictedWaiters;

+ (id)sharedBabysitter;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)giveAccountWithIDAnotherChance:(id)a0;
- (void)_incrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_reloadBabysitterProperties;
- (char)accountShouldContinue:(id)a0;
- (char)accountWithIDShouldContinue:(id)a0;
- (char)registerAccount:(id)a0 forOperationWithName:(id)a1;
- (void)unregisterAccount:(id)a0 forOperationWithName:(id)a1;
- (void)_decrementRefreshCountForWaiter:(id)a0 forOperationWithName:(id)a1;
- (void)_decrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;

@end
