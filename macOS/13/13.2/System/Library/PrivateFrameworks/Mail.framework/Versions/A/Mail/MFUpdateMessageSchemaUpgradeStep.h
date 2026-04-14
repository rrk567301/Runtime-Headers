@interface MFUpdateMessageSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id)_newMessagesTableDefinition;
- (id)_summariesTableDefinition;
- (void)_handleNullSubject;

@end
