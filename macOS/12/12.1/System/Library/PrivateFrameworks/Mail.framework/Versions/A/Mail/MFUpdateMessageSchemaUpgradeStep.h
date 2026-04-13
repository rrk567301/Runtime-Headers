@interface MFUpdateMessageSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id)_newMessagesTableDefinition;
- (void)_handleNullSubject;
- (id)_summariesTableDefinition;

@end
