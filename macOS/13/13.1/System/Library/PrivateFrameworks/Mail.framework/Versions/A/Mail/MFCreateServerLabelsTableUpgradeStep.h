@interface MFCreateServerLabelsTableUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (void)_populateFromIMAPLabelsTable;
- (void)_populateFromLocalMessagesTable;

@end
