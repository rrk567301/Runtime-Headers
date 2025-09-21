@class NSDictionary, ACAccountStore, ACAccount;

@interface AADataclassActionsStore : NSObject {
    ACAccount *_account;
}

@property (retain, nonatomic, setter=_setAccountStore:) ACAccountStore *accountStore;
@property (readonly, nonatomic) BOOL actionsForDeletionFetched;
@property (retain, nonatomic) NSDictionary *dataclassDeletionActions;
@property (readonly, nonatomic) BOOL actionsForAdditionFetched;
@property (readonly, nonatomic) BOOL keychainActionsForAdditionFetched;
@property (retain, nonatomic) NSDictionary *dataclassAdditionActions;
@property (retain, nonatomic) NSDictionary *keychainDataclassAdditionActions;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)refreshActionsForAddingAccount:(id)a0;
- (id)_fetchActionsForAddingAccount:(id)a0;
- (id)_fetchActionsForDeletion;
- (id)_fetchActionsForMergeList:(id)a0;
- (id)_fetchKeychainActionsForAddingAccount:(id)a0;
- (BOOL)actionsContainLoseNonUploadedDataAction:(id)a0;
- (id)dataclassesWithLocalDataForAddingAccount:(id)a0;
- (id)dataclassesWithNonUploadedData;
- (id)dataclassesWithRemainingData;
- (id)defaultDataclassActionsForDeletion;
- (id)deleteActionForKeychainDataclassForAddingAccount:(id)a0;
- (id)deleteLocalDataActionsForAddingAccount:(id)a0;
- (id)mergeActionForKeychainDataclassForAddingAccount:(id)a0;
- (id)mergeLocalDataIntoSyncDataActionsForAddingAccount:(id)a0;
- (void)refreshAccountDeletionActions;

@end
