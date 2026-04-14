@interface MFForeignKeyUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (void)_addForeignKeysForTable:(id)a0 createSQL:(const char *)a1 insertSQL:(const char *)a2;

@end
