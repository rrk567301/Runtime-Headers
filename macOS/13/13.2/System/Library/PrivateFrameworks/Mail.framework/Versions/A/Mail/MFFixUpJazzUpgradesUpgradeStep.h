@interface MFFixUpJazzUpgradesUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 columnNames:(id)a2;
- (BOOL)_needToPerformUpgrade;
- (id)_serverMessageDefinition;
- (id)_serverMessageColumns;
- (id)_attachmentsDefinition;
- (id)_attachmentsColumns;
- (id)_searchableMessageTombstonesDefinition;
- (id)_searchableMessageTombstonesColumns;
- (id)_recipientsDefinition;
- (id)_recipientsColumns;
- (id)_localMessageActionsDefinition;
- (id)_localMessageActionsColumns;
- (id)_actionMessagesDefinition;
- (id)_actionMessagesColumns;

@end
