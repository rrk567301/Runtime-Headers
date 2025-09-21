@interface MFRecalculateAllConversationsUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;
+ (char)recalculateAllConversations;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
