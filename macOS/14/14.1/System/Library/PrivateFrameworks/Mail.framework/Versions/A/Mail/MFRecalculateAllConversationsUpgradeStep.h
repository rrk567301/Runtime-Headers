@interface MFRecalculateAllConversationsUpgradeStep : MFLibraryUpgradeStep

+ (BOOL)recalculateAllConversations;
+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
