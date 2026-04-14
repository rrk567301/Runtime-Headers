@interface MFAddMessageGlobalDataUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id)_messagesTableDefinition;

@end
