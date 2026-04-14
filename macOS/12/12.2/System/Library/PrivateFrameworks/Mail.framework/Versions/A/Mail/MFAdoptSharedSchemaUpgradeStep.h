@interface MFAdoptSharedSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id)_conversationsTableSchema;
- (id)_conversationsTableColumns;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 columnNames:(id)a2;
- (id)_conversationIdMessageIDTableSchema;
- (id)_conversationIdMessageIDTableOldColumns;
- (id)_conversationIDMessageIDTableColumns;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 oldColumnNames:(id)a2 newColumnNames:(id)a3;
- (id)_mailboxesTableSchema;
- (id)_mailboxesTableColumns;
- (id)_recipientsTableSchema;
- (id)_recipientsTableOldColumns;
- (id)_recipientsTableColumns;
- (id)_addressesTableSchema;
- (id)_addressesTableColumns;
- (id)_subjectsTableSchema;

@end
