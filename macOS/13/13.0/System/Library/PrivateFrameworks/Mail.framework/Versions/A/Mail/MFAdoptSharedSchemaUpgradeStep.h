@interface MFAdoptSharedSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (id)_addressesTableSchema;
- (id)_subjectsTableSchema;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 columnNames:(id)a2;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 oldColumnNames:(id)a2 newColumnNames:(id)a3;
- (id)_conversationsTableSchema;
- (id)_conversationsTableColumns;
- (id)_conversationIdMessageIDTableSchema;
- (id)_conversationIDMessageIDTableColumns;
- (id)_conversationIdMessageIDTableOldColumns;
- (id)_mailboxesTableSchema;
- (id)_mailboxesTableColumns;
- (id)_recipientsTableSchema;
- (id)_recipientsTableColumns;
- (id)_recipientsTableOldColumns;
- (id)_addressesTableColumns;

@end
