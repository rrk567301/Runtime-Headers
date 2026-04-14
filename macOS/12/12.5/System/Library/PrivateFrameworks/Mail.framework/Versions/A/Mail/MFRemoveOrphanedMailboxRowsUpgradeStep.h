@interface MFRemoveOrphanedMailboxRowsUpgradeStep : MFRemoveMessagesUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id)_mailboxRowIDListWithAccountURLStrings:(id)a0;

@end
