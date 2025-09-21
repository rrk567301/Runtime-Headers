@class EDBusinessPersistence, NSString, EDMessagePersistence, MCCCategoryRulesController, NSObject;
@protocol OS_os_log, EFScheduler, EDAccountsProvider;

@interface EDCategorizationSyncManager : NSObject <EFLoggable, MCCCategoryRulesDelegate, EDCategoryChangeHookResponder> {
    id<EFScheduler> _icloudSyncScheduler;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) MCCCategoryRulesController *rulesController;
@property (readonly, nonatomic) EDBusinessPersistence *businessPersistence;
@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_findMessagesForAddressIDs:(id)a0;
- (id)_messageForSenderInICloud:(id)a0;
- (id)_nativeOverrideRulesMap;
- (id)_overrideRuleFromRecord:(id)a0;
- (id)_overrideRuleRecordForMessage:(id)a0 forAddressID:(id)a1;
- (void)_syncNativeRulesToServer:(id)a0;
- (void)_syncRuleToWebForMessages:(id)a0 withCategory:(id)a1 atTimestamp:(id)a2;
- (void)_updateServerRuleToDevice:(id)a0 addressID:(long long)a1 withTimestamp:(id)a2 withCategory:(unsigned long long)a3 withAddress:(id)a4 shouldRestoreCategory:(BOOL)a5;
- (void)categoryRulesController:(id)a0 didReceiveOverrideRules:(id)a1;
- (void)categoryRulesController:(id)a0 didReceiveSyncAllOverrideRules:(id)a1;
- (id)initWithBusinessPersistence:(id)a0 messagePersistence:(id)a1 accountsProvider:(id)a2 hookRegistry:(id)a3;
- (void)loadiCloudMCCKit;
- (void)persistenceDidChangeCategoryOverrideForAddressIDs:(id)a0 category:(id)a1 timestamp:(id)a2 originator:(unsigned long long)a3;
- (void)persistenceDidClearAllCategoryOverridesWithTimestamp:(id)a0;

@end
