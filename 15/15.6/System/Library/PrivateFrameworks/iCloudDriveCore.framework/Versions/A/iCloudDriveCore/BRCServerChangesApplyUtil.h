@interface BRCServerChangesApplyUtil : NSObject

+ (char)shouldForceApplyContentForItem:(id)a0;
+ (char)checkEarlyExitsPriorToApplying:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 session:(id)a5 isDeleteOfShareRoot:(char)a6 diffs:(unsigned long long)a7 clientZone:(id)a8;
+ (char)deletingShareRoot:(id)a0 localItem:(id)a1;
+ (char)handleApplyChangesForUnliveServerItem:(id)a0 isDeleteOfShareRoot:(char)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 session:(id)a5;
+ (char)handleEtagsChangesOnly:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 diffs:(unsigned long long *)a5 needsSave:(char *)a6;
+ (char)handleNonRevivedItemIfNecessary:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 hasInitialScanItemTypeMismatch:(char *)a5;

@end
